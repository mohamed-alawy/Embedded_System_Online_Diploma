/*
 * Ex2.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	char a=0;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
	if(a=='a'||a=='e'||a=='i'||a=='u'||a=='o'||
	   a=='A'||a=='E'||a=='I'||a=='U'||a=='O')
	{
		printf("%c is vowel\n",a);
	}
	else
	{
		printf("%c is consonant",a);
	}
}

