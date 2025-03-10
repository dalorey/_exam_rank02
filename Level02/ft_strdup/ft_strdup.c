#include <stdlib.h> // for malloc; NULL;

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
		len++;
	return (len);
}

char    *ft_strdup(char *src)
{
	char	*dst;
	int	i;

	i = 0;	
	if (!src)
		return (NULL);
	dst = (char *)malloc(ft_strlen(src) + 1);
	if (!dst)
		return (NULL); // malloc protect
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

#include <string.h> // for strdup;
#include <stdio.h> // for printf; NULL

int	main(int argc, char *argv[])
{
	char *dst1;
	char *dst2;
	
	if (argc == 2)
	{
		dst1 = ft_strdup(argv[1]);
		printf("[ft_strdup] dst = %s\n", dst1);
		free (dst1);
		dst2 = strdup(argv[1]);
		printf("[   strdup] dst = %s\n", dst2);
		free (dst2);
	}
	return (0);
}
