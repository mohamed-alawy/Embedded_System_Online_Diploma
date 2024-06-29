/*
 * Ex2.c
 *
 *  Created on: 28 Jun 2024
 *      Author: Mohamed
 */

#include<stdio.h>
int main()
{
	struct Sdistance
	{
		int feet;
		float inch;
	} d1, d2, r;

	printf("Enter 1st distance\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d1.feet);
	fflush(stdout);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d1.inch);

	printf("\nEnter 2nd distance\n");
	printf("Enter feet: ");
	fflush(stdout);
	scanf("%d", &d2.feet);
	fflush(stdout);
	printf("Enter inch: ");
	fflush(stdout);
	scanf("%f", &d2.inch);

	r.feet = d1.feet + d2.feet;
	r.inch = d1.inch + d2.inch;

	while (r.inch>=12.0)
	{
		r.inch = r.inch - 12.0;
		r.feet ++;
	}
	printf("\nSum of distances = %d\'-%.1f\"", r.feet, r.inch);
	return 0;
}
