#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100

typedef struct {
    int id;
    char title[100];
    char author[100];
} Book;

Book library[MAX_BOOKS];
int bookCount = 0;

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("\nLibrary is full! Cannot add more books.\n");
        return;
    }
    printf("\nEnter Book ID: ");
    scanf("%d", &library[bookCount].id);
    getchar();  // Clear newline character from input buffer
    printf("Enter Book Title: ");
    scanf(" %[^\n]s", library[bookCount].title);
    getchar();  // Clear newline character from input buffer
    printf("Enter Book Author: ");
    scanf(" %[^\n]s", library[bookCount].author);
    bookCount++;
    printf("\nBook added successfully!\n");
}

void viewBooks() {
    if (bookCount == 0) {
        printf("\nNo books available in the library.\n");
        return;
    }
    printf("\n%-10s %-30s %-30s\n", "Book ID", "Title", "Author");
    printf("------------------------------------------------------------\n");int i;
    for (i = 0; i < bookCount; i++) {
        printf("%-10d %-30s %-30s\n", library[i].id, library[i].title, library[i].author);
    }
}

void searchBook() {
    int id;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);int i;
    for (i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            printf("\nBook Found:\n");
            printf("Book ID: %d\nTitle: %s\nAuthor: %s\n", library[i].id, library[i].title, library[i].author);
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", id);
}

void deleteBook() {
    int id;
    printf("\nEnter Book ID to delete: ");
    scanf("%d", &id);
    int i,j;
    for (i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            for (j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];
            }
            bookCount--;
            printf("\nBook with ID %d deleted successfully.\n", id);
            return;
        }
    }
    printf("\nBook with ID %d not found.\n", id);
}

int main() {
    int choice;
    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                viewBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("\nExiting the system. Goodbye!\n");
                exit(0);
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    }
    return 0;
}

