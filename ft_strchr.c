#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (0);
}	

// int	main(void)
// {
// 	char 	b;
// 	char	c;
// 	char	s[] = "Pineapple";

// 	c = *ft_strchr(s, 'B');
// 	printf("%c\n", c);
// 	b = *strchr(s, 'B');
// 	printf("%c", b);
// 	return (0);
// }
