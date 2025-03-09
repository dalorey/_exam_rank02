#include <unistd.h>

char	swap_letter(char *base_l, char *base_u, char letter)
{
	int 	i;
	char	new_letter = '\0';
	
	i = 0;
	while (base_l[i] && base_u[i])
	{
		if (base_l[i] == letter)
		{
			new_letter = base_u[i];
			break;
		}
		else if (base_u[i] == letter)
		{
			new_letter = base_l[i];
			break;
		}
		else
			new_letter = letter;
		i++;
	}
	return (new_letter);
}

int	main(int argc, char *argv[])
{
	char	*base_l = "abcdefghijklmnopqrstuvwxyz";
	char	*base_u = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int	i;
	char	new_letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			new_letter = swap_letter(base_l, base_u, argv[1][i]);
			write(1, &new_letter, 1);
			i++;
		}		
	}
	write (1, "\n", 1);
	return (0);
}
