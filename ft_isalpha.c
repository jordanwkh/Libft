#include <unistd.h>
#include <stdio.h>
#include "libft.h"
int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

// int	main(void)
// {	
// 	printf("%d", ft_isalpha('F'));
// 	return (0);
// }