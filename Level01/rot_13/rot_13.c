#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	rot_letter(char *base, char letter, int rot)
{
	int	i;
	
	i = 0;
	while (base[i] != letter)
		i++;
	return (base[(i + rot) % ft_strlen(base)]);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		rot;
	char	letter;
	char	*base_u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*base_l = "abcdefghijklmnopqrstuvwxyz";

	i = 0;
	rot = 13;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				letter = rot_letter(base_u, argv[1][i], rot);
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				letter = rot_letter(base_l, argv[1][i], rot);
			else
				letter = argv[1][i];
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
