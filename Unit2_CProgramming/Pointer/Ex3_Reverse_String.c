/*
 * Ex3.c
 *
 *  Created on: 4 JUL 2024
 *      Author: Mohamed
 */

#include <stdio.h>
#include <string.h>

int main()
{
	char str[100],rstr[100];
	int len,i;
	char *Pstr = str;
	char *Prstr = rstr;

	printf("Input a string : ");
	fflush(stdout);
	gets(str);

	len= strlen(str);
	for (i=0 ; i<len ; i++)
	{
		Prstr[i] =Pstr[len-i-1];
	}

	Prstr[len]='\0';

	printf("Reverse of the string is : %s",Prstr);

	return 0;
}
