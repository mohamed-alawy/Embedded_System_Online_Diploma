/*
 * Ex7.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	int a=0,b=0;
	printf("Enter value of a: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	fflush(stdin);fflush(stdout);
	printf("Enter value of b: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&b);
    a=b-a;
    b=b-a;
	a=a+b;
	printf("After swapping, value of a = %d\n",a);
	printf("After swapping, value of b = %d",b);
}
