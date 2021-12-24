#include "get_next_line_bonus.h"
/*
appends an existing string with one character
no ft_strlen is needed because len is already added as parameter
and gets updated at the end of thefunction.
since ft_append is going to be used to update the value of str, str is 
freed at the end of function
*/
char *ft_append(char *str, char c, int *len)
{
	char	*newstr;
	int i;
	
	newstr = malloc(*len + 2);
	if (!newstr)
		return (0);
	i = -1;
	if (*len != 0)
		while(i++, i < *len)
			newstr[i] = str[i];
	else
		i = 0;
	newstr[i] = c;
	newstr[i+1] = 0;
	*len = *len + 1;
	free(str);
	return (newstr);
}
/*
	Read chars one by one from fd.
	Append each read char to a string.
	Stop at the 4th char, or when the char is \n, or readresult < 1
	Repeat the whole process if last char is not \n or readresult < 1
*/
//ERROR CATCHING:
//all variables must have a declared value before use
char *ft_getline(int fd, int size)
{
	int i;
	int readres;
	char *line;
	char c;
	int len;

	i = -1;
	readres = 1;
	len = 0;
	c = 0;
	line = 0;
	while (i = -1, readres == 1 && c != '\n')
	{
		while (i++, i < size && readres == 1 && c != '\n')
		{
			readres = read(fd, &c, 1);
			if (readres == 1)
				line = ft_append(line, c, &len);
		}
	}
	return (line);
}