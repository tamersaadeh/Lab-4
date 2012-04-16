/*
 * main.c
 *
 *  Created on: 16 Apr 2012
 *      Author: tamer
 */

#include <stdio.h>

int main() {
	double x, mean = 0.0;
	puts("Please enter a decimal:");
	scanf("%lf", &x);
	int a, size = 0, sum = 0;
	do {
		puts("Please enter number:");
		scanf("%d", &a);
		sum += a;
		size++;
		mean = (double) sum / (double) size;
		printf("mean=%lf\n", mean);
	} while (mean < x && size < 10);

	return 0;
}
