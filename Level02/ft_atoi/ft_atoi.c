int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	
	num = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	num;

	num = 0;
	if (argc == 2)
		num = ft_atoi(argv[1]);
	printf("Number: %i\n", num);
	return (0);
}
