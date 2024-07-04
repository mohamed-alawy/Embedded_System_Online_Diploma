/*
 * Ex4.c
 *
 *  Created on: 4 JUL 2024
 *      Author: Mohamed
 */

#include <stdio.h>

int main()
{
	int n[15],rn[15],i,num;
	int *Pn = n;
	int *Prn = rn;

	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdout);
	scanf("%d",&num);

	for (i=0 ; i<num ; i++)
	{
		printf("element - %d : ",i+1);
		fflush(stdout);
		scanf("%d",Pn);
		Pn++;
	}

	Pn = n;

	printf("The elements of array in reverse order are : \n");

	for (i=0 ; i<num ; i++)
	{
		Prn[i]=Pn[num-i-1];
		printf("element - %d : %d\n",num-i,Prn[i]);
	}

	return 0;
}
