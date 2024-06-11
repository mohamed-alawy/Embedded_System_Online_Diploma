/*
 * Ex3.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	int a =0,b=0,sum=0;
	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("Sum: %d",sum);
}
