/*
 * Ex3.c
 *
 *  Created on: 14 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
#include<string.h>
int i;
void reverse (char s[],char rs[],int l)
{
	if(l>0)
	{
		rs[i]=s[l-1];
		i++;
		reverse(s,rs,l-1);
	}
}

int main()
{
	char string[1000],rstring[1000];
	int len;

	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(string);
	len=strlen(string);
	reverse(string,rstring,len);
	rstring[len]='\0';

	printf("%s",rstring);

	return 0;
}
