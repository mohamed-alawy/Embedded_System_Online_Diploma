/*
 * Ex3.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>

int main()
{
	int r,c,i,j;
	int arr[100][100];
	int tarr[100][100];

	printf("Enter rows and columns of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&r,&c);

	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\nEntered matrix:\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			printf("%d  ",arr[i][j]);
		}
		printf("\n");
	}

	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			tarr[j][i]=arr[i][j];
		}
	}

	printf("\nTranspose of matrix:\n");
	for (i=0;i<c;i++)
	{
		for (j=0;j<r;j++)
		{
			printf("%d  ",tarr[i][j]);
		}
		printf("\n");
	}

	return 0;
}


