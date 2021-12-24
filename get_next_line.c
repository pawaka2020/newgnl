#include "get_next_line.h"
//gcc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c.
//Or if you don't want to use size = BUFFER_SIZE, replace with size = 4 for testing.
//Sub 4 with whatever value you like
char	*get_next_line(int fd)
{
	char	*line;
	int			size;

	size = BUFFER_SIZE;
	if (fd < 0 || size <= 0)
		return (0);
	line = ft_getline(fd, size);
	return (line);
}
//remember to comment out main before submitting to moulinette or using testers.
int	main(void)
{
	char *str;
	int fd1 = open("text1", O_RDONLY);
	str = get_next_line(fd1);
	printf("fd1 = %s", str);
	str = get_next_line(fd1);
	printf("fd1 = %s", str);
}