/**
 * A command line program that reads input until end of file
 * and echos to stdout with the following command-line args:
 * -p print input as is.
 * -l print input in all lower case.
 * -u print input in all upper-case.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 5
// Write a function that returns the difference between the largest and smallest
// elements in an array of doubles.



int main(int argc, char*argv[]) {
	int ch;
	char mode = 'p';
	if (argv[1] != NULL) {
		mode = argv[1][1];
	}
	while ((ch = getchar()) != EOF) {
		
	
		if (mode == 'l') {
			putchar(tolower(ch));
		} else if (mode == 'u') {
			putchar(toupper(ch));
		} else {
			putchar(ch);	
		}
	}
	return 0;
}