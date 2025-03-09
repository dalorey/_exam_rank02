int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int		len;
	char	str[10] = "Hola";

	len = 0;
	printf("str len: %i\n", ft_strlen(str));
	return (0);
}
