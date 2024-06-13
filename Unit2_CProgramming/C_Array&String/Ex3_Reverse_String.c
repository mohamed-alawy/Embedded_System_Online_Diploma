/*
 * Ex3.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char string[1000],rstring[1000];
	int len;

	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(string);
	len=strlen(string);

	while(string[i]!=0)
	{
		rstring[i]=string[len-1-i];
		i++;
	}

	rstring[len]='\0';

	printf("Reverse string is : %s",rstring);

	return 0;
}


