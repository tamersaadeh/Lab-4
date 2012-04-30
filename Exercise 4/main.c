/*
 * main.c
 *
 *  Created on: 16 Apr 2012
 *      Author: tamer
 */

#include <stdio.h>

int main() {
	int triangle;
	do {
		puts("Please enter the size of the triangle:");
		scanf("%d", &triangle);
	} while (triangle <= 0 || triangle >= 40);

	int i;
	for (i = 0; i < triangle; i++) {
		int j;
		for (j = 0; j < i + 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
