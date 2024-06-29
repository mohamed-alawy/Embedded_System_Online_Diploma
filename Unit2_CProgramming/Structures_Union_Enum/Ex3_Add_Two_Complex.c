/*
 * Ex3.c
 *
 *  Created on: 29 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
int main()
{
	struct Scomplex
	{
		float real;
		float imag;
	} comp1,comp2,sum;

	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f", &comp1.real);
	scanf("%f", &comp1.imag);
	fflush(stdout);
	printf("For 2st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f", &comp1.real);
	scanf("%f", &comp2.imag);

	sum.real=comp1.real+comp2.real;
	sum.imag=comp1.imag+comp2.imag;

	printf("Sum = %0.1f+%0.1fi", sum.real,sum.imag);
	return 0;
}
