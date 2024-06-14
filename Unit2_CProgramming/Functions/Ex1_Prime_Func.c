/*
 * Ex1.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
int p[100];
int j;
void prime(int a,int b)
{
	int arr[100],i,k,isPrime;
	for(i=0;i<(b-a);i++)
	{
		arr[i]=a+i;
		isPrime = 1;
		for (k = 2; k <= (arr[i]/2); k++)
		{
			if (arr[i] % k == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if (isPrime)
		{
			p[j] = arr[i];
			j++;
		}
	}
}

int main()
{
	int num1,num2,i=0;

	printf("Enter two number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	prime(num1,num2);

	printf("Prime numbers between %d and %d are: ",num1,num2);
	for(i=0;i<j;i++)
	{
		printf("%d ",p[i]);
	}
	return 0;
}



