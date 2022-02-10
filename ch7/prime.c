// Write a program that accepts a positive integer as input and displays all the
// prime numbers smaller than or equal to that number.
#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 
#include <math.h>

bool is_prime(unsigned int);

int main(void) {
	int n;
	printf("Enter a number and we'll give you every prime number <= to your number.\n");
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		if (is_prime(i)) {
			printf("%d\n", i);
		}
	}
}


bool is_prime(unsigned int n) {
	if (n == 2) {
		return true;
	}
	if (n % 2 == 0) {
		return false;
	}
	int sq = (int)round(sqrt(n));
	for (int i = sq; i >= 3;  i--) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}