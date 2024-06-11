/*
 * Ex4.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	float a =0,b=0,mul=0;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&a,&b);
	mul=a*b;
	printf("Product: %f",mul);
}
