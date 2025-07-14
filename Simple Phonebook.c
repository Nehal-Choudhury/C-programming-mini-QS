Question: Create a phonebook application that can add a new contact (Name and Phone Number) to a file named `phonebook.txt` and display all contacts from the file.

--- SOLUTION ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "phonebook.txt"

void addContact() {
    FILE *file = fopen(FILENAME, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    
    char name[50], phone[15];
    printf("Enter name: ");
    scanf(" %[^\n]s", name);
    printf("Enter phone number: ");
    scanf("%s", phone);
    
    fprintf(file, "Name: %s, Phone: %s\n", name, phone);
    fclose(file);
    printf("Contact added successfully!\n");
}

void displayContacts() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("Phonebook is empty or file not found.\n");
        return;
    }
    
    char line[100];
    printf("\n--- Phonebook Contacts ---\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    printf("------------------------\n");
    fclose(file);
}

int main() {
    int choice;
    
    while(1) {
        printf("\nPhonebook Menu\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}