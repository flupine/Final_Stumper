/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** Main function of rush3
*/

#include "../include/my.h"
#define BUFF_SIZE (4096)

void	rush3(char *buff);

int		main(void)
{
	char	buff[BUFF_SIZE + 1];
	int		offset;
	int		len;

	offset = 0;
	while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0)
	{
		offset += len;
	}
	buff[offset] = '\0';
	if (len < 0)
		return (84);
	if (offset == 0)
		return(84);
	rush3(buff);
	return (0);
}
