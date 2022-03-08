/**
 * A recursive function to convert decimal to any number system, e.g. hex.
 * In this case a recursive function is useful because the first digit we find
 * is the last digit we want to print. E.g. to_base(4): 100.
 * 
 * 1. Remainder 4 % 2 == 0
 * 2. Recurse, passing 2
 * 3. 2 % 2 == 0
 * 4. Recruse, passing 1
 * 5. 1 is not greater than or equal to 2, so
 * 6. 1 is odd so print 1
 * 7. Unwrap stack frame:
 * 8. print 0
 * 9. print 0.
 */
#include <stdio.h>

void to_base(unsigned long n, int base);

int main(void) {
	unsigned long number;
	int base;
	printf("Enter an integer (q to quit):\n");
	while (scanf("%lu %d", &number, &base) == 2) {
		to_base(number, base);
		putchar('\n');
	}
	
	return 0;
}

void to_base(unsigned long n, int base) {
	int r;
	// Determine if the number is odd or even. 
	// If base is even, e.g. 2 or 10, then number will end with
	// 0.
	if (base % 2 == 0) {
		printf("base is even");
		r = n %2;
	} else {
		r = n % 1;
	}

	// The base case is when n < 2 because, for example, if n
	// is 1 or 0 there's nothing more to do.
	if (n >= base) {
		to_base(n/base, base);
	}
	putchar(r == 0 ? '0' : '1');
	return;
}