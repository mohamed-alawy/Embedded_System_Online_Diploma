/*
 * Ex4.c
 *
 *  Created on: 14 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>

int power(int num1,int num2)
{
	if(num2==0)
	{
		return 1;
	}
	else
	{
		return num1*power(num1,num2-1);
	}
}

int main()
{
	int n1,n2;

	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n1);
	fflush(stdin); fflush(stdout);
	printf("Enter power number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n2);

	printf("%d^%d = %d",n1,n2,power(n1,n2));

	return 0;
}
