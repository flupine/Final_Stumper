/*
** EPITECH PROJECT, 2017
** rush3.c
** File description:
** functions of rush3
*/

#include "../include/my.h"

void	my_more(char *buff, int h, int i)
{
	if (buff[0] == 'o' && buff[h - 1] == 'o')
		my_putstr("[rush1-1] ");
	if (buff[0] == '/' && buff[h - 1] == '\\')
		my_putstr("[rush1-2] ");
	if (buff[0] == 'A' && buff[h - 1] == 'A')
		my_putstr("[rush1-3] ");
	if (buff[0] == 'A' && buff[i - 2] == 'C')
		my_putstr("[rush1-4] ");
	if (buff[0] == 'A' && buff[i - 2] == 'A')
		my_putstr("[rush1-5] ");
	if (buff[0] != '/' && buff[0] != 'o' && buff[0] != 'A')
		my_putstr("Not found ");
}

void	my_one(char *buff)
{
	if (buff[0] == 'B')
		my_putstr("[rush1-3] 1 1 || [rush1-4] 1 1 || rush[1-5] 1 1");
	if (buff[0] == 'o')
		my_putstr("[rush1-1] 1 1");
	if (buff[0] == '*')
		my_putstr("[rush1-2] 1 1");
	if (buff[0] != '*' && buff[0] != 'o' && buff[0] != 'B')
		my_putstr("Not found");
}

void	rush3(char *buff)
{
	int i = 0;
	int v = 0;
	int h = 0;

	while(buff[h] != '\n')
		h++;
	while(buff[i] != '\0') {
		if (buff[i] == '\n')
			v++;
		i++;
	}

	if (i == 2)
		my_one(buff);
	if (i > 2) {
		my_more(buff, h, i);
		my_put_nbr(h);
		my_putchar(' ');
		my_put_nbr(v);
	}
}
