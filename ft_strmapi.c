#include "libft.h"
#include <stdio.h>
#include <unistd.h>
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*out;

	i = 0;
	out = ft_strdup(s);
	if (!out)
		return (NULL);
	while (s[i])
	{
		out[i] = (*f)(i, out[i]);
		i++;
	}
	return (out);
}
