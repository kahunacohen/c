 
 // Write a program that reads in a line of input and then prints the line in reverse order.
 // You can store the input in an array of char; assume that the line is no longer than 255
 // characters. Recall that you can use scanf() with the %c specifier to read a character at
 // a time from input and that the newline character (\n) is generated when you press the
 // Enter key.

#include <stdio.h>
#include <stdlib.h> 

int main(void) {
	int line_size = 10;	
	int i = 0;
	int  j;
	char c;
	char *line = malloc(line_size * sizeof(char));
	if (line == NULL) {
  		fprintf(stderr, "malloc failed\n");
  		return -1;
	}
	printf("Enter a line of text and ENTER to see it reversed\n");
	while (scanf("%c", &c) == 1) {
		if (i != 0 && i % 11 == 0) {
			line_size += 10;
			printf("re-allocate line char array to %d\n", line_size);
			line = (char *) realloc(line, line_size * sizeof(char));
		}
		line[i] = c;
		i++;

		if (c == '\n') {
			break;
		}
	}
	for (j = i; j >= 0; j--) {
		printf("%c", line[j]);
	}
	printf("\n");
	// printf("size of line: %lu", sizeof line);
	free(line);
	return 0;
}