#include <unistd.h>

/*
void	putnbr(int num)
{	
	if (num > 9)
		putnbr(num / 10);
	write(1, &"0123456789"[num % 10], 1);
}
*/

void	putnbr(int num)
{
	char	digit;

	if (num < 10)
		digit = num + '0';
	else
	{
		putnbr(num / 10);
		digit = num % 10 + '0';
	}
	write(1, &digit, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			write(1, "fizz", 4);
		else if ((i % 3 != 0) && (i % 5 == 0))
			write(1, "buzz", 4);
		else if ((i % 3 == 0) && (i % 5 == 0))
			write(1, "fizzbuzz", 8);
		else
			putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
