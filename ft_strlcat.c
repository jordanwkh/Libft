#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	lend;
	size_t	lens;

	lend = ft_strlen((char *)dst);
	lens = ft_strlen((char *)src);
	i = 0;
	if (dstsize == 0)
		return (lens);
	if (dstsize <= lend)
		return (lens + dstsize);
	while (src[i] != '\0' && (lend + i) > (dstsize - 1))
	{
		dst[lend + i] = *(char *)src;
		i++;
	}
	dst[lend + i] = '\0';
	return (lend + lens);
}
