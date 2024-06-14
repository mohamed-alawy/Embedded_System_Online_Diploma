/*
 * Ex8.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	float a,b,c;
	char op;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&op);
	fflush(stdin);fflush(stdout);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	switch (op)
	{
	case '+':
	{
		c=a+b;
		printf("%.1f %c %.1f = %.1f\n",a,op,b,c);
	}break;
	case '-':
	{
		c=a-b;
		printf("%.1f %c %.1f = %.1f\n",a,op,b,c);
	}break;
	case '*':
	{
		c=a*b;
		printf("%.1f %c %.1f = %.1f\n",a,op,b,c);
	}break;
	case '/':
	{
		c=a/b;
		printf("%.1f %c %.1f = %.1f\n",a,op,b,c);
	}break;
	default:
		printf("wrong operator");
	}



}

