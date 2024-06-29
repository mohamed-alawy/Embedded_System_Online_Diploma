/*
 * Ex1.c
 *
 *  Created on: 28 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
void main()
{
	int n,i;
	struct Sstudent
	{
		char name[50];
		int roll;
		float mark;
	};
	struct Sstudent student[100];
	printf("Enter number of students: ");
	fflush(stdout);
	scanf("%d",&n);
	printf("Enter information of students\n");
	fflush(stdout);
	for(i=0;i<n;i++)
	{
		printf("Enter name: ");
		fflush(stdout);
		scanf("%s",&student[i].name);
		printf("Enter roll number: ");
		fflush(stdout);
		scanf("%d",&student[i].roll);
		printf("Enter mark: ");
		fflush(stdout);
		scanf("%f",&student[i].mark);
		printf("\n");
	}
	printf("Displaying Information");
	for(i=0;i<n;i++)
	{
		printf("\nName: %s",student[i].name);
		printf("\nRoll: %d",student[i].roll);
		printf("\nMark: %.2f\n",student[i].mark);
	}
}
