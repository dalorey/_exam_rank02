#include <unistd.h>

/*
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
*/

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr("hola mundo\n");

	return (0);
}
