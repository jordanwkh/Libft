#include "libft.h"
#include <stdio.h>
// static size_t	word_counter(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	word;

// 	i = 0;
// 	word = 0;
// 	while (s[i] != '\0')
// 	{
// 		while (s[i] == c && s[i] != '\0')
// 			i++;
// 		if (s[i])
// 			word++;
// 		while (s[i] != c && s[i] != '\0')
// 			i++;
// 	}
// 	return (word);
// }

// int	main(void)
// {
// 	printf("%zu", word_counter("      split       this for   me  !       ", 32));
// 	return (0);
// }



// while (!new[i] && i >= 0)
		// {
		// 	i--;
		// 	free(new[i]);
		// 	if (i == 0)
		// 	{
		// 		free(new);
		// 		return (NULL);
		// 	}	
		// }
// int	main(void)
// {
// 	int i = 0;
// 	char *s = "      split       this for   me  !       ";

// 	char **result = ft_split(s, ' ');
// 	while (result[i])
// 		printf("%d		%s\n", i, result[i++]);
// }


#include <stdio.h>
void printNumber(int nbr)  
{
    printf("%d\n", nbr);
}
void myFunction(void (*f)(int))  
{
    for(int i = 0; i < 5; i++) 
    {
        (*f)(i);
    }
}
int main(void)  
{
    myFunction(printNumber);
    return (0);
}