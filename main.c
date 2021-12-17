#include "libft.h"
#include <stdio.h>//

int	main(void)
{	
	size_t i;
	char **s;

	i = 0;
	s = ft_split( "a",' ');
	while (s[i])
	{
		printf("%s", s[i]);
		free(s[i]);
		i++;
	}
	free(s);
}
