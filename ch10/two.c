#include <stdio.h>
#define SIZE 5
// Write a function that returns the difference between the largest and smallest
// elements in an array of doubles.

double diff(double array[], int size);

int main(void) {
	double ar1[SIZE] = {1, 2, 5, 1.32, 1000.5};
	printf("%f\n", diff(ar1, SIZE));
	return 0;
}

double diff(double array[], int size) {
	double largest = array[0];
	double smallest = array[0];
	for (int i = 0; i < SIZE; i++){
		if (array[i] > largest) {
			largest = array[i];
		}
		if (array[i] < smallest) {
			smallest = array[i];
		}
	}
	return largest - smallest;
}
