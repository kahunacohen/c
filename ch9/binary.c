/**
 * A recursive function to convert decimal to any number system, e.g. hex.
 * In this case a recursive function is useful because the first digit we find
 * is the last digit we want to print. E.g. to_base(3, 10) == '03'.
 * 
 * 1. Remainder 3 % 10 == 3
 * 2. 3 is not greater than or equal to 2
 * 3. recurse: 3/10, pass 0, 10
 * 4. Remainder 0 % 10 == 0
 * 5. 0 is not greater than or equal to 2
 * 6. Print '0'
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

// to_base(3, 10);
// r=3
// r = 0

// to_base(2, 2)
// 2 % 2 = 0
// 1 % 2 = 1

// to_base(13, 10);
// 3
// 1
void to_base(unsigned long n, int base) {
	int r;
	// Determine if the number is odd or even. 
	// If base is even, e.g. 2 or 10, then number will end with
	// 0.

	r = n % base;

	// The base case is when n < 2 because, for example, if n
	// is 1 or 0 there's nothing more to do.
	if (n >= 2) {
		to_base(n / base, base);
	}
	printf("\nputchar\n");
	putchar('0' + r);
	return;
}