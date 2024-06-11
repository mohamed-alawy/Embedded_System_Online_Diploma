/*
 * Ex5.c
 *
 *  Created on: 11 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main(void){
	char a;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %c = %d",a,a);
}
