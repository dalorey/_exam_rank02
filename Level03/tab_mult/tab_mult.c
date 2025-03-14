#include <unistd.h> // for write;

int	ft_atoi(char *s)
{
	int	res = 0;
	int	i = 0;
	
	while (s[i] && s[i] >= 48 && s[i] <= 57)
	{
		res = res * 10 + s[i] - '0';
		i++; 
	}
	return (res);
}

void	ft_putnbr(int num)
{
	char	num_letter;
	
	if (num >= 10)
		ft_putnbr(num / 10);
	num_letter = num % 10 + '0';
	write(1, &num_letter, 1);
}

void	ft_putstr(char *s)
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}		
}

int	main(int argc, char *argv[])
{
	int	index;
	int	num;
	
	index = 1;
	(void) argv;
	if (argc == 2)
	{
		while (index < 10)
		{
			ft_putnbr(index);
			ft_putstr(" x ");
			num = ft_atoi(argv[1]);
			ft_putnbr(num);
			ft_putstr(" = ");
			ft_putnbr(ft_atoi(argv[1]) * index);
			ft_putstr("\n");
			index++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
