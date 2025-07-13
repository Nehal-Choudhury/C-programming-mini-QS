Question: Create a program to store and display the details (Roll No, Name, Marks) of a student using a structure.

--- SOLUTION ---
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;

    printf("Enter Student Information\n");
    printf("Enter Roll Number: ");
    scanf("%d", &s1.rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]s", s1.name);
    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("\nDisplaying Information\n");
    printf("Roll Number: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}