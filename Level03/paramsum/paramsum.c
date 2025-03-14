#include <unistd.h>

void	ft_putnbr(int num)
{
	char	num_letter;
	
	if (num >= 10)
		ft_putnbr(num / 10);
	num_letter = num % 10 + '0';
	write(1, &num_letter, 1);
}

int	main(int argc, char *argv[])
{
	(void) argv[0];
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
