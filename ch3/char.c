#include <stdio.h>

int main(void)
{
	int ascii;
	printf("Enter an ASCII code value:\n");
	scanf("%d", &ascii);
	printf("The character having ASCII code %d is %c.\n", ascii, ascii);
	return 0;
}