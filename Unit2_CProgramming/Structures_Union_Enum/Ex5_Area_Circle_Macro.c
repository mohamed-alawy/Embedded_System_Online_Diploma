/*
 * Ex5.c
 *
 *  Created on: 29 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
#define pi 3.14
int main()
{
	float area,radius;
	printf("Enter the radius = ");
	fflush(stdout);
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("Area = %0.2f",area);
	return 0;
}
