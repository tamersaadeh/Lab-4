/*
 * main.c
 *
 *  Created on: 16 Apr 2012
 *      Author: tamer
 */
#include <stdio.h>

long fib(int n) {
	if (n <= 0)
		return 0l;
	else if (n == 1)
		return 1l;
	else
		return fib(n - 1) + fib(n - 2);
}

/**
 * This is a simple function that generates the nth Fibonacci non-recursively.
 */
long fibNonRec(int n) {
	long f1 = 0l;
	long f2 = 1l;
	long fn;
	long i;
	if (n <= 0)
		return f1;
	else if (n == 1)
		return f2;
	else {
		for (i = 2; i <= n; i++) {
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
		}
	}

	return fn;
}
double wfib(int n) {
	if (n <= 1)
		return 1.0;
	else if (n == 2)
		return 2.0;
	else
		return wfib(n - 1) * wfib(n - 2);
}

double wfibNonRec(int n) {
	double f1 = 1.0;
	double f2 = 2.0;
	double fn;
	int i;
	if (n <= 1)
		return f1;
	else if (n == 2)
		return f2;
	else {
		for (i = 3; i <= n; i++) {
			fn = f1 * f2;
			f1 = f2;
			f2 = fn;
		}
	}

	return fn;
}

int main() {
	puts("Actual Fibonacci:");
	long nonrec = fibNonRec(20);
	printf("Non-Recursive:\tthe 20th fib is %ld\n", nonrec);
	long rec = fib(20);
	printf("Recursive:\tthe 20th fib is %ld\n", rec);
	puts("Weird Fibonacci:");
	double wnonrec = wfibNonRec(10);
	printf("Non-Recursive:\tthe 10th fib is %lf\n", wnonrec);
	double wrec = wfib(10);
	printf("Recursive:\tthe 10th fib is %lf\n", wrec);
	return 0;
}
