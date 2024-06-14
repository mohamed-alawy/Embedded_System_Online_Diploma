/*
 * Ex1.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	int a=0;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d is odd\n",a);
	}
	else
	{
		printf("%d is even",a);
	}
}

