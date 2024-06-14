/*
 * Ex2.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char string[1000];

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(string);

	while(string[i]!=0)
	{
		i++;
	}

	printf("\nLength of string: %d",i);

	return 0;
}


