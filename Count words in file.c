Question: Write a program to count the total number of words in a text file. The filename should be provided by the user.

--- SOLUTION ---
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;
    int words = 0;
    int inWord = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    printf("Total words: %d\n", words);
    fclose(file);

    return 0;
}