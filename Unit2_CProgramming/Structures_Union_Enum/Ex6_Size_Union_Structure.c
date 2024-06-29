/*
 * Ex6.c
 *
 *  Created on: 29 Jun 2024
 *      Author: Mohamed
 */

#include <stdio.h>
union job
{
	char name[32];
	float salary;
	int worker_no;
}u;
struct job1
{
	char name[32];
	float salary;
	int worker_no;
}s;


int main(){
	printf("size of union = %d",sizeof(u));          //32 byte
	printf("\nsize of structure = %d", sizeof(s));   //40 byte
	return 0;
}
