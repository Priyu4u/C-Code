#include <stdio.h>

int main() {
    // C program to count number of characters, words and lines in a text file.
    FILE *fptr;
    fptr = fopen("counting.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char ch;
    int characters = 0, lines = 0, words = 0;
    int in_word = 0;

    while ((ch = fgetc(fptr)) != EOF) {
        characters++;

        if (ch == '\n' || ch == '\0') { 
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }

    fclose(fptr);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    return 0;
}
