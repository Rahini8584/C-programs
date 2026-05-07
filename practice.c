// 1. Library Management System
// Scenario: Create a system to manage books in a library. Each book has ID, title, and price. Write functions to add books and find the most expensive book using pointers to struct.

// #include <stdio.h>
// #include <string.h>

// struct Book {
//     int id;
//     char title[50];
//     float price;
// };

// void addBook(struct Book *b, int id, char *title, float price) {
//     b->id = id;
//     strcpy(b->title, title);
//     b->price = price;
// }

// struct Book* findMostExpensive(struct Book books[], int n) {
//     struct Book *max = &books[0];
//     for(int i = 1; i < n; i++) {
//         if(books[i].price > max->price) {
//             max = &books[i];
//         }
//     }
//     return max;
// }

// int main() {
//     struct Book library[3];
//     addBook(&library[0], 1, "C Programming", 500.0);
//     addBook(&library[1], 2, "Data Structures", 700.0);
//     addBook(&library[2], 3, "Algorithms", 450.0);
    
//     struct Book *expensive = findMostExpensive(library, 3);
//     printf("Most expensive: %s (Rs %.0f)\n", expensive->title, expensive->price);
//     return 0;
// }

// 2. Student Grade Calculator
// Scenario: Process student records. Calculate average marks and assign grades using function pointers.

// #include <stdio.h>

// struct Student {
//     int rollno;
//     float marks[3];
// };

// float calculateAverage(float m1, float m2, float m3) {
//     return (m1 + m2 + m3) / 3;
// }

// char getGrade(float avg) {
//     if(avg >= 90) return 'A';
//     if(avg >= 80) return 'B';
//     if(avg >= 70) return 'C';
//     return 'F';
// }

// int main() {
//     struct Student s = {101, {85, 92, 78}};
    
//     float (*calcAvg)(float, float, float) = calculateAverage;
//     char (*getG)(float) = getGrade;
    
//     float avg = calcAvg(s.marks[0], s.marks[1], s.marks[2]);
//     printf("Roll: %d, Average: %.1f, Grade: %c\n", s.rollno, avg, getG(avg));
//     return 0;
// }