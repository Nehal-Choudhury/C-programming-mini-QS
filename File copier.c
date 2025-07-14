Question: Write a program that copies the content of one file to another. The user should provide the source and destination file names.

--- SOLUTION ---
#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);
    printf("Enter destination file name: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        exit(1);
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        fclose(source);
        printf("Error opening destination file.\n");
        exit(1);
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(dest);

    return 0;
}