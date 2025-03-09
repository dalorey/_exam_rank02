#include <unistd.h>

int	letter_pos(char *base, char argv)
{
	int	num;

	num = 0;
	while ((argv != base[num]) && base[num])
		num++;
	if (argv == base[num])
		return (num);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	num;
	char	*abc = "abcdefghijklmnopkrstuvwxyz";
	char	*ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	j = 0;
	num = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			num = letter_pos(abc, argv[1][i]) + letter_pos(ABC, argv[1][i]) + 1;
			j = 0;
			while (j < num)
			{
				write(1, &argv[1][i], 1);
				if (!letter_pos(abc, argv[1][i]) && !letter_pos(ABC, argv[1][i]))
					break ;
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
