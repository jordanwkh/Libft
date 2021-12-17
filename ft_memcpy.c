#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	const char		*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char	a[] = "Werkt dit?";
// 	char	b[] = "Muis mat";
// 	ft_memcpy(a, b, 5);
// 	printf("%s", a);
// }
