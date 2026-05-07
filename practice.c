// 1. Library Management System
// Scenario: Create a system to manage books in a library. Each book has ID, title, and price. Write functions to add books and find the most expensive book using pointers to struct.

#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    float price;
};

void addBook(struct Book *b, int id, char *title, float price) {
    b->id = id;
    strcpy(b->title, title);
    b->price = price;
}

struct Book* findMostExpensive(struct Book books[], int n) {
    struct Book *max = &books[0];
    for(int i = 1; i < n; i++) {
        if(books[i].price > max->price) {
            max = &books[i];
        }
    }
    return max;
}

int main() {
    struct Book library[3];
    addBook(&library[0], 1, "C Programming", 500.0);
    addBook(&library[1], 2, "Data Structures", 700.0);
    addBook(&library[2], 3, "Algorithms", 450.0);
    
    struct Book *expensive = findMostExpensive(library, 3);
    printf("Most expensive: %s (Rs %.0f)\n", expensive->title, expensive->price);
    return 0;
}