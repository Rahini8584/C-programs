#include<stdio.h>

// struct Student{
//     char student_name[10];
//     int marks1;
//     int marks2;
//     int marks3;
// };

// struct employee_details{
//     int id;
//     char emp_name[100];
//     float basic_salary;
//     float net_salary;

// };

// void calc_net_salary(struct  employee_details *ptr){
//     float h , d, net;
//     h= ptr->basic_salary * 0.20;
//     d= ptr->basic_salary * 0.10;
//     ptr->net_salary = ptr->basic_salary + h + d;
// }

// void displayEmployees(struct employee_details e[], int n ){
//     int i ;
//     printf("\nEmployee Details:\n");
//     printf("ID   Name   Basic   Net salary\n");
//     for(i = 0 ; i<n ;i++){
//         printf("%d  %s  %.2f  %.2f\n",e[i].id,e[i].emp_name,e[i].basic_salary, e[i].net_salary);
//     }
// }
int main(){
    // struct Student s1;
    // printf("ENTER NAME : ");
    // scanf("%9s",&s1.student_name);
    // printf("enter marks of 3 subjects :  ");
    // scanf("%d" "%d" "%d",&s1.marks1,&s1.marks2,&s1.marks3);
    // printf("Name : %s\n",s1.student_name);
    // printf("Average marks : %d\n",(s1.marks1+s1.marks2+s1.marks3)/3);
    // int n , i ;
    // printf("Enter no. of employees : \n");
    // scanf("%d",&n);
    // struct employee_details emp[n];
    // for(i=0;i<n;i++){
    // printf("enter ID : \n");
    // scanf("%d",&emp[i].id);
    // printf("enter Name : \n");
    // scanf("%s",emp[i].emp_name);
    // printf("enter Basic Salary : \n");
    // scanf("%f",&emp[i].basic_salary);
    // calc_net_salary(&emp[i]);
    // }
    // displayEmployees(emp,n);
    return 0 ;

}


// ----------------------- PRACTICE QUESTION 1 --------------------

// A company wants to manage employee salary details. Each employee has:
// ID
// Name
// Basic Salary
// You need to:
// Store details of N employees using structures
// Calculate Net Salary using a function:
// HRA = 20% of basic
// DA = 10% of basic
// Net Salary = Basic + HRA + DA
// Use:
// Functions with pointers to modify salary
// Array of structures
// Pointer to structure
// Display all employee details along with net salary
// Constraints:
// No recursion
// No dynamic memory allocation (no malloc, calloc, etc.)
// Input Format

// Enter number of employees: N

// For each employee:
// Enter ID:
// Enter Name:
// Enter Basic Salary:

// Output Format

// Employee Details:
// ID   Name   Basic   Net Salary
// ...

// Sample Test Case
// Sample Input:

// Enter number of employees: 2
// Enter ID: 101
// Enter Name: Rahul
// Enter Basic Salary: 10000
// Enter ID: 102
// Enter Name: Simran
// Enter Basic Salary: 20000

// Sample Output:

// Employee Details:
// 101 Rahul 10000.00 13000.00
// 102 Simran 20000.00 26000.00

// Concepts Covered
// 1.     Functions (declaration + definition)
// 2.      Call by reference (pointer passing)
// 3.      Structures & array of structures
// 4.     Pointer to structure (->)
// 5.     Storage (local variables = auto by default)

//------------------------   SOLUTION    -------------------------------


// #include <stdio.h>

// // Structure definition
// struct Employee {
//     int id;
//     char name[50];
//     float basic;
//     float netSalary;
// };

// // Function to calculate net salary using pointer
// void calculateSalary(struct Employee *emp) {
//     float hra = 0.20 * emp->basic;
//     float da  = 0.10 * emp->basic;
//     emp->netSalary = emp->basic + hra + da;
// }

// int main() {
//     int n, i;

//     // Input number of employees
//     printf("Enter number of employees: ");
//     scanf("%d", &n);

//     // Array of structures (no dynamic memory)
//     struct Employee emp[n];

//     // Input details
//     for(i = 0; i < n; i++) {
//         printf("Enter ID: ");
//         scanf("%d", &emp[i].id);

//         printf("Enter Name: ");
//         scanf("%s", emp[i].name);

//         printf("Enter Basic Salary: ");
//         scanf("%f", &emp[i].basic);

//         // Call function using pointer
//         calculateSalary(&emp[i]);
//     }

//     // Output
//     printf("\nEmployee Details:\n");
//     printf("ID   Name   Basic   Net Salary\n");

//     for(i = 0; i < n; i++) {
//         printf("%d %s %.2f %.2f\n",
//                emp[i].id,
//                emp[i].name,
//                emp[i].basic,
//                emp[i].netSalary);
//     }

//     return 0;
// }
// ---------------------------------------------------------------------