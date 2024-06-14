/*
 * Ex4.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	float a;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	if(a>0)
	{
		printf("%.2f is positive \n",a);
	}
	else if(a<0)
	{

		printf("%.2f is negative \n",a);
	}
	else
	{
		printf("You entered zero\n");
	}

}

