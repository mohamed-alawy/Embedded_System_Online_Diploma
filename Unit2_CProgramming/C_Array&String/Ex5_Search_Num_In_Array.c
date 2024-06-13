/*
 * Ex5.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>

int main()
{
	int n,i,num;
	int arr[100];

	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nEnter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	for (i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
			printf("Number found at location = %d\n",i+1);
		}
	}

	return 0;
}


