/*
 * main.c
 *
 *  Created on: 16 Apr 2012
 *      Author: tamer
 */
#include <stdio.h>

int main() {
	int a, sum = 0;

	do {
		printf("Please enter a number: ");
		scanf("%d", &a);
		sum += a;
	} while (a != 0);

	printf("Sum: %d\n", sum);

	return 0;
}
