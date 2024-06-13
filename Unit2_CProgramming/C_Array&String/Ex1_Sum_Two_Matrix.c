/*
 * Ex1.c
 *
 *  Created on: 13 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>

int main()
{
	float arr1[2][2];
	float arr2[2][2];
	float sum[2][2];
	int i=0;
	int j=0;

	printf("Enter elements of 1st matrix\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{

			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr1[i][j]);
		}
	}

	printf("Enter elements of 2st matrix\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&arr2[i][j]);
		}
	}

	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}

	printf("\nSum of matrix:\n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%.1f  ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}


