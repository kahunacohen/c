// Write a program that accepts a positive integer as input and displays all the
// prime numbers smaller than or equal to that number.
#include <stdio.h>
#include <stdlib.h> 
#include <stdbool.h> 
#include <math.h>

bool is_prime(unsigned int);

int main(void) {
	unsigned int n;
	printf("Enter a positive integer to get all primer numbers smaller or equal to it.\n");
	scanf("%d", &n);
	while (n > 1) {
		// Only even prime number is 2.
		if (n == 2 || n % 2 != 0){ 
			// printf("testing for prime %d\n", n);
			// printf("%d\n", is_prime(n));
			// is_prime(n);
			printf("%d is prime?%d\n", n, is_prime(n));
		}
		n--;
	}
	return 0;
}


bool is_prime(unsigned int n) {
	// get rounded square of n since that's the max
	// factors that a number could be. E.g. 9 has max factors of
	// 3 * 3, so it's not prime. We can start checking factors from there.
	int s = (int)round(sqrt(n));
	for (int i = s; i > 1; i--) {
		printf("check %d * %d = %d\n", s, i, n);
		if (s * i == n) {
			// printf("not prime");
			return false;
		}
	}
	return true;
}