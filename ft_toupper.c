#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122 )
	{
		c = c - 32;
	}
	return (c);
}
// int	main(void)
// {
// 	char	a;
// 	a = ft_toupper('b');
// 	printf("%c", a);
// }