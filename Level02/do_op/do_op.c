#include <unistd.h>
#include <stdio.h>

int	atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (num * sign);
}

int	main(int argc, char *argv[])
{
	int	num_one = 1;
	int	num_two = 2;
	int	result;
	
	result = 0;
	if (argc == 4)
	{
		num_one = atoi(argv[1]);
//		printf("num_one: %i\n", num_one);
		num_two = atoi(argv[3]);
//		printf("num_two: %i\n", num_two);
		if (argv[2][0] == '+')
			result = num_one + num_two;
		else if (argv[2][0] == '-')
			result = num_one - num_two;
		else if (argv[2][0] == '*')
			result = num_one * num_two;
		else if (argv[2][0] == '/')
			result = num_one / num_two;
		else if (argv[2][0] == '%')
			result = num_one % num_two;
		printf("%i", result);
	}
	printf("\n");
//	fflush(stdout);	// needed with write(1, "\n", 1); not needed with printf("\n")
//	write(1, "\n", 1);
	return (0);
}
