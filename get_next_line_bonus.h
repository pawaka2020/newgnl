#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
//-- standard libraries -- 
/*for testing printf in main()*/
#include <stdio.h>
/*for write()*/
#include <unistd.h>
/*for O_RDLY to be used together with write()*/
#include <fcntl.h>
/*for malloc() and free()*/
#include <stdlib.h>
//-- function prototypes --
/* adds a character to an existing string.
string length is added as parameter to avoid
'null string' memory errors and remove the need for ft_strlen */
char *ft_append(char *str, char c, int *len);
/*get current line.
separated from get_next_line to reduce function size
and make get_next_line more norminette-friendly*/
char *ft_getline(int fd, int size);
/*returns the first line upon the first call, 
then the second line upon second call, etc
fd will be provided either by our own main function for testing 
or by norminette*/
char	*get_next_line(int fd);
#endif
