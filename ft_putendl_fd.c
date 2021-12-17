#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	char	end;

	end = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &end, 1);
}
