#include <unistd.h>
#include <stdio.h> // for printf --- DELETE!!!

char	rot_alpha(char *base, char *base_i, char letter)
{
	int	i;
	char	new_letter;
	
	i = 0;
	while (base[i])
	{
		if (base[i] == letter)
		{
			new_letter = base_i[i];
			break;
		}
		i++;
	}
	if (base[i] == '\0')
		new_letter = '\0';
	return (new_letter);
}

int	main(int argc, char *argv[])
{
	char	*base_l = "abcdefghijklmnopqrstuvwxyz";
	char	*base_li = "zyxwvutsrqponmlkjihgfedcba";
	char	*base_u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	*base_ui = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
	char	letter;
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				letter = rot_alpha(base_l, base_li, argv[1][i]);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				letter = rot_alpha(base_u, base_ui, argv[1][i]);
			else
				letter = argv[1][i];
			write (1, &letter, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
