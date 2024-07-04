/*
 * Ex2.c
 *
 *  Created on: 4 JUL 2024
 *      Author: Mohamed
 */

#include <stdio.h>

int main()
{
	int i;
	char AZ = 'A';
	char *ptr = &AZ;

	for (i=0 ; i<=25 ; i++)
	{
		printf("%c\t",(*ptr)++);
	}

	return 0;
}
