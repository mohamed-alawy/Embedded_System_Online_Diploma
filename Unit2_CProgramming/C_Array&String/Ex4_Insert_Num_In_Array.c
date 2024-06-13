/*
 * Ex4.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>

int main()
{
	int n,i,num,loc;
	int arr[100];

	printf("Enter no of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("\nEnter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	fflush(stdin); fflush(stdout);
	printf("\nEnter the location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&loc);

	for (i=n;i>loc-1;i--)
	{
		arr[i]=arr[i-1];
	}

	arr[loc-1]=num;

	for (i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}


