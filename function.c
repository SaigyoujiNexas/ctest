#include "ctest.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
char* s_gets(char* str, unsigned int n)
{
	char * ret_val, *found;
	ret_val = fgets(str, n, stdin);
	found = strchr(str, '\n');
	if (found)
		*found = '\0';
	else
		while (getchar() != '\n')
			continue;
	return ret_val;
}

//ctest¡∑œ∞≤ø∑÷
struct month months[12] =
{
	{"January", "jan", 31, 1},
	{"February", "feb", 28, 2},
	{"March", "mar", 31, 3},
	{"April", "apr", 30, 4},
	{"May", "may", 31, 5},
	{"June", "jun", 30, 6},
	{"July", "jul", 31, 7},
	{"August", "aug", 31, 8},
	{"September", "sep", 30, 9},
	{"October", "oct", 31, 10},
	{"November", "nov", 30, 11},
	{"December", "dec", 31, 12}
};

int bstoi(char* binary)
{
	int num = 0;
	while (*binary != '\0')
	{
		num <<= 1;
		num |= (*binary - '0');
		binary++;
	}
	return num;
}
char* itobs(int n, char* ps)
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);

	for (i = size - 1; i >= 0; i--, n >>= 1)
		ps[i] = (01 & n) + '0';
	ps[size] = '\0';
	return ps;
}
int openbit_count(int num)
{
	int i, n = 0;
	for (i = 0; i < (CHAR_BIT * sizeof(int)); num >>= 1,i++)
	{
		if (num & 1)
			n++;
	}
	return n;
}





