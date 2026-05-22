// #include<stdio.h>
// // POINTER is a variable used to store address of a variable

// int main(){
//     int a= 10;
//     int *p = &a;
//     printf("%d\n",a);
//     printf("%p\n",p);

//     return 0;
// }

#include <stdio.h>
#include <string.h>
#define MAX 100
enum Grade
{
    A = 1,
    B,
    C
};

struct Student
{
    int roll;
    char name[30];
    int age;
    float marks;
    enum Grade grade;
};

void inputStudent(struct Student *s)
{
    int choice;

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Age: ");
    scanf("%d", &s->age);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);

    printf("Enter Grade Choice (1-A, 2-B, 3-C): ");
    scanf("%d", &choice);

    s->grade = choice;
}

void displayStudent(struct Student s)
{
    printf("\nRoll Number : %d\n", s.roll);
    printf("Name : %s\n", s.name);
    printf("Age : %d\n", s.age);
    printf("Marks : %.2f\n", s.marks);

    if (s.grade == A)
        printf("Grade : A\n");
    else if (s.grade == B)
        printf("Grade : B\n");
    else
        printf("Grade : C\n");
}

void highestMarks(struct Student s[], int n)
{
    int i, index = 0;
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[index].marks)
        {
            index = i;
        }
    }

    printf("\nHighest Marks Student\n");

    printf("\nRoll Number : %d\n", s[index].roll);
    printf("Name : %s\n", s[index].name);
    printf("Marks : %.2f\n", s[index].marks);
}

int main()
{
    struct Student s[MAX];
    int n, i;
    printf("Enter Number of Students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Details of Student %d\n", i + 1);
        inputStudent(&s[i]);
    }
    printf("\nStudent Details\n");
    for (i = 0; i < n; i++)
    {
        displayStudent(s[i]);
    }
    highestMarks(s, n);
    return 0;
}