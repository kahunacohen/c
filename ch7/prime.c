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
	// printf("0 prime? %d\n", is_prime(0));
	// printf("1 prime? %d\n", is_prime(1));
	// printf("2 prime? %d\n", is_prime(2));
	// printf("3 prime? %d\n", is_prime(3));
	// printf("4 prime? %d\n", is_prime(4));
	// printf("11 prime? %d\n", is_prime(11));
	// printf("15 prime? %d\n", is_prime(15));
	// printf("239 prime? %d\n", is_prime(239));
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
		// printf("%d mod %d = %d\n", n, i, n % i);
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}