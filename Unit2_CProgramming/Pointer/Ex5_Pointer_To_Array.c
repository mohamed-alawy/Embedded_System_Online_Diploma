/*
 * Ex5.c
 *
 *  Created on: 5 JUL 2024
 *      Author: Mohamed
 */

#include <stdio.h>

struct student
{
	char name[20];
	int id;
};

int main()
{
	struct student stu1 = {"Ahmed",1001};
	struct student stu2 = {"Alex",1002};
	struct student stu3 = {"Ali",1003};
	struct student *ptr[3]={&stu1,&stu2,&stu3};
	printf("Name: %s\nID: %d\n", ptr[1]->name, ptr[1]->id);

	return 0;
}
