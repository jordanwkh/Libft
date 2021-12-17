#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
char	*ft_strnstr( const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}

  //int main(void)
 // {
 	// char a[] = "Ciao Bella";
 	// char b[] = "Bella";
 	//printf("%s\n", ft_strnstr(a, b, 10));
 	//printf("%s", strnstr(a, b, 10));

  //}


