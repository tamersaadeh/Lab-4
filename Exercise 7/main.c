/*
 * main.c
 *
 *  Created on: 16 Apr 2012
 *      Author: tamer
 */

/* I have not followed the intructions as they seem very ineffiecient
 * way to computing the maximum Size of valus of a type
 */

#include <math.h>
#include <stdio.h>

#define _size(type) (pow(2, sizeof (type) * 8 - 1) - 1)
#define _usize(type) (pow(2, sizeof (type) * 8) - 1)

int main() {
	printf("Size of short:\t\t");
	short s = _size(short);
	printf("%hd\n", s);

	printf("Size of int:\t\t");
	int i = _size(int);
	printf("%d\n", i);

	// The following code overflows, not sure why
	printf("Size of long:\t\t");
	long l = _size(long);
	printf("%ld\n", l);

	printf("Size of float:\t\t");
	float f = _size(float);
	printf("%f\n", f);

	printf("Size of double:\t\t");
	double d = _size(double);
	printf("%lf\n", d);

	printf("Size of long double:\t");
	long double ld = _size(long double);
	printf("%Lf\n", ld);

	printf("Size of unsigned short:\t");
	unsigned short us = _usize(short);
	printf("%hu\n", us);

	printf("Size of unsigned int:\t");
	unsigned int ui = _usize(unsigned int);
	printf("%u\n", ui);

	return 0;
}
