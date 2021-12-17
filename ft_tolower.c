#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}
// int	main(void)
// {
// 	char	a;
// 	a = ft_tolower('B');
// 	printf("%c", a);
// }