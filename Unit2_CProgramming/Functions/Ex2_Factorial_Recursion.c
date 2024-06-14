/*
 * Ex2.c
 *
 *  Created on: 14 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>

int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}

int main()
{
	int n;

	printf("Enter an positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	if(n<0)
	{
		printf("Enter an positive integer");
	}
	else
	{
		printf("Factorial of %d = %d",n,fact(n));
	}

	return 0;
}
