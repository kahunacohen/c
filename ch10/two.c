#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
// Write a function that returns the difference between the largest and smallest
// elements in an array of doubles.

double * sum(double array[], double array2[], int size);

int main(void) {
	double ar1[SIZE] = {1, 2, 5, 1.32, 1000.5};
	double ar2[SIZE] = {4, 5, 6, 7, 8};
	double * xs = sum(ar1, ar2, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("x: %f\n", xs[i]);
	}
	free(xs);
	return 0;
}

double * sum(double array[], double array2[], int size) {
	double *ret = malloc(sizeof(double) * size);
	if (!ret) {
		fprintf(stderr, "No memory");
        exit(EXIT_FAILURE);
	}
	for (int i = 0; i < size; i++) {
		ret[i] = array[i] + array2[i];
	}
	return ret;
}
