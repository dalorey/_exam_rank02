int	ft_atoi(const char *str)
{
	int	res;
	int	i;
	
	res = 0;
	i = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

int	ft_strlen(const char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi_base(const char *str, char *str_base)
{
	int	res;
	int	sign;
	int	i;
	
	res = 0;
	sing = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i])
	{
		res = res * ft_strlen(str) + str_base[i] - '0';
		i++;
	}
	return (res);
}

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*str = "42";
	
	(void) argv;
	if (argc == 2)
	{
		printf("Number in base 10 is: %d\n", ft_atoi(str));
		printf("Number in base 10 is: %d\n", ft_atoi_base(str, "0123456789"));
		printf("Number in base 16 is: %d\n", ft_atoi_base(str, "0123456789abcdef"));
	}
	return (0);
}
