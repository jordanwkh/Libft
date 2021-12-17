#include <unistd.h>
#include <stdio.h>
#include "libft.h"
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main(void)
// {

// 	printf("%d", ft_strlen("Hoeveel is dit?"));
// 	return(0);
// }