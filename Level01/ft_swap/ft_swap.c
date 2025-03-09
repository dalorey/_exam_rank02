void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>

int	main(void)
{
	int	a = 5;
	int	b = 10;

	printf("[1] a: %i, b: %i\n", a, b);
	ft_swap(&a, &b);
	printf("[2] a: %i, b: %i\n", a, b);

	return (0);
}
