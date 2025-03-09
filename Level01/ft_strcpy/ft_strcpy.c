char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <unistd.h>

int	main(void)
{
	char	src[4] = "HOLA";
	char	dst[4] = "";

	write(1, ft_strcpy(dst, src), 4);
	return (0);
}
