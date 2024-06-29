/*
 * Ex1.c
 *
 *  Created on: 17 Jun 2024
 *      Author: Mohamed
 */
#include <stdio.h>

float SQRT(int num) {
	float sqrt;
	if(num<0)
	{
		printf("Please enter integer number");
	}
	else
	{
		sqrt=num^0.5
		return sqrt;
	}
}

int main() {
	int num ;
	printf("Enter number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	fflush(stdin); fflush(stdout);
	printf("SQRT of %d = %.3f",num,SQRT(num));
	return 0;
}


