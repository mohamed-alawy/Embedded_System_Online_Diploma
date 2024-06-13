/*
 * Ex2.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>

int main()
{
	int n;
	float arr[1000];
	float sum;
	int i=0;

	printf("Enter number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);
	}

	for (i=0;i<n;i++)
	{
		sum+=arr[i];
	}

	printf("Average = %.2f  ",sum/n);

	return 0;
}


