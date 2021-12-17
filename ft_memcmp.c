#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// int main (void) 
// {
//    char str1[15];
//    char str2[15];
//    int ret;

//    memcpy(str1, "ABCDEG", 6);
//    memcpy(str2, "ABCDFG", 6);

//    ret = ft_memcmp(str1, str2, 5);

//    if(ret > 0) {
//       printf("str2 is less than str1");
//    } else if(ret < 0) {
//       printf("str1 is less than str2");
//    } else {
//       printf("str1 is equal to str2");
//    }
//    return(0);
// }
