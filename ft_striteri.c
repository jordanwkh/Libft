#include "libft.h"
#include <stdio.h>
#include <unistd.h>

// void	iter(unsigned int i, char * s) 
// {
// 	*s += i;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
