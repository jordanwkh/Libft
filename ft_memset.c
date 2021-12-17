#include <unistd.h>
#include <stdio.h>
#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = b;
	while (len > 0)
	{
		*str = c;
		str++;
		len--;
	}	
	return (b);
}

// int	main(void)
// {
// 	char str[] = "Werkt dit";
// 	ft_memset( str, 'J', 3);
// 	printf("%s", str);
// }
