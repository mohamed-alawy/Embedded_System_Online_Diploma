/*
 * Ex1.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	int i=0,count=0;
	char string[1000];

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(string);


	printf("\nEnter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);

	while(string[i]!=0)
	{
		if(string[i]==c)
		{
			count++;
		}

		i++;
	}

	printf("\nFrequency if %c = %d",c,count);

	return 0;
}


