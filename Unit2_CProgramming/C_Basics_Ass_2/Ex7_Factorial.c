/*
 * Ex7.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	int n,i,mul=1;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	if(n>=0)
	{
		for(i=1;i<=n;i++)
		{
			mul*=i;
		}
		printf("Factorial = %d\n",mul);
	}
	else
	{
		printf("Error!!! Factorial of negative numbers doesn't exist\n");
	}
}

