/*
 * main.c
 *
 *  Created on: 16 Apr 2012
 *      Author: tamer
 */

#include <stdio.h>

int main() {
	int a, sum = 0, size = 0, min, max;

	do {
		printf("Please enter a number: ");
		scanf("%d", &a);
		if (a != 0) {
			if (!size) {
				min = a;
				max = a;
			}
			if (min > a)
				min = a;
			if (max < a)
				max = a;
			sum += a;
			size++;
		}
	} while (a);

	printf("Sum: %d\n", sum);

	double mean = (double) sum / (double) size;

	printf("Mean: %lf\n", mean);
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);

	return 0;
}
