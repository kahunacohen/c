#include <stdio.h>
#include <stdlib.h>
#define TITLE_SIZE 45
#define FILM_MAX 2
#define MAX_LINE_LENGTH 80


struct film {
    char title[TITLE_SIZE];
    int rating; 
};

int main(int argc, char *argv[]) {
    FILE *fp;
    int ch;
    struct film movies[FILM_MAX];
    char line[MAX_LINE_LENGTH] = {0};

    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf("Can't open file: %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (fgets(line, MAX_LINE_LENGTH, fp)){
        printf("%s", line);

    }
    fclose(fp);
    printf("done\n");

    return 0;
}
