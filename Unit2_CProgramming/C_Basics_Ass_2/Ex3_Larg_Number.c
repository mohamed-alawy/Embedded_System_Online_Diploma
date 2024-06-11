/*
 * Ex3.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	float a,b,c,larg;
	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	larg=a;
	if(b>larg&&b>c)
	{
		printf("Largest number = %.2f \n",b);
	}
	else if(c>larg&&c>b)
	{

		printf("Largest number = %.2f \n",c);
	}
	else if (larg>b&&larg>c)
	{
		printf("Largest number = %.2f \n",a);
	}
	else
	{
		printf("The numbers are equal\n");
	}
}

