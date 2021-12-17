#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	
	//if (!s)
	//	return (0);
	i = 0;
	while (i < n)
	{	
		if (*((unsigned char *)s + i) == (unsigned char)c)
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (0);
}

// int	main (void)
// {
//    const char str[] = "bla t bla bla";
//    const char ch = 't';
//    char *ret;
//    char *ret1;

//    ret = memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    ret1 = ft_memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret1);
   
//    return(0);
// }
