/**
 * A recursive function to convert decimal to any number system, e.g. hex.
 * In this case a recursive function is useful because the first digit we find
 * is the last digit we want to print. E.g. to_binary(4): 100.
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

void to_binary(unsigned long n);

int main(void) {
	unsigned long number;
	printf("Enter an integer (q to quit):\n");
	while (scanf("%lu", &number) == 1) {
		printf("Binary:\n");
		to_binary(number);
		putchar('\n');
	}
	
	return 0;
}

void to_binary(unsigned long n) {
	int r;
	// Determine if the number is odd or even.
	// In binary even numbers will end in 0, odd inq
	r = n %2;

	// The base case is when n < 2 because, for example, if n
	// is 1 or 0 there's nothing more to do.
	if (n >= 2) {
		to_binary(n/2);
	}
	putchar(r == 0 ? '0' : '1');
	return;
}