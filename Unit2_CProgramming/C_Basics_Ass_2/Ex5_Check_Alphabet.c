/*
 * Ex5.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	char a;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
	if(a>='a'&&a<='z'||a>='A'&&a<='Z')
	{
		printf("%c is an alphabet \n",a);
	}
	else
	{
		printf("%c is not an alphabet \n",a);
	}

}

