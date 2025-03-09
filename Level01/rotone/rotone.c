#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	rot_one(char *base, char letter, int rot)
{
	int i;
	
	i = 0;
	while (base[i] && base[i] != letter)
	{
		i++;
	}
	if (base[i] == letter)
		return (base[(i + rot) % ft_strlen(base)]);
	else
		return (base[i]);
}

int	main(int argc, char *argv[])
{
	char *base_l = "abcdefghijklmnopqrstuvwxyz";
	char *base_u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letter_l;
	char letter_u;
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter_l = rot_one(base_l, argv[1][i], 1);
			letter_u = rot_one(base_u, argv[1][i], 1);
			if ((letter_l != '\0') || (letter_u != '\0'))
				if (letter_l)
					write(1, &letter_l, 1);
				else
					write(1, &letter_u, 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
