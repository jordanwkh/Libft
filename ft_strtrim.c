#include "libft.h"
#include <stdio.h>

static int	ft_inset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		l;
	char	*rtn;

	i = 0;
	l = ft_strlen(s1);
	while (ft_inset(set, s1[i]))
	{
		i++;
	}
	while (ft_inset(set, s1[l - 1]))
	{
		l--;
	}
	rtn = ft_substr(s1, i, l - i);
	if (!rtn)
		return (NULL);
	return (rtn);
}

// int main(void)
// {
//     char s1[] = "     ";
//     char set[] = " ";
//     printf("%s", ft_strtrim(s1, set));
//     return (0);
// }