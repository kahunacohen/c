// Write a program that reads input as a stream of characters until encoutering EOF. Have
// it report the average number of letters per word. Don't count whitespace as being letters
// in a word. Actually, punctuation shouldn't be counted either, but don't worry about that
// now. (If you do want to worry about it, consider using the ispunct() function from the
// ctype.h family.)

// foo bar aaron letters/num_words 
#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h> 


int main(void) {
	int ch;
	int letters = 0;
	int num_words = 0;
	int average_letters_per_word = 0;
	

	while ((ch = getchar()) != EOF) {
		if (ispunct(ch)) {
			continue;
		}
		if (isspace(ch)) {
			// new word.
			num_words++;
		} else {
			// another character of the same word.
			letters++;
		}
	}
	printf("Total words: %d\n", num_words);
	printf("Total letters: %d\n", letters);
	printf("Average letters per word: %d\n", letters/num_words);

	return 0;
}