// #include<stdio.h>

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
// int main(){
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
    // return 0 ;

// }


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

// ------------------------------------------------------------------practice question 3 -------------------------------------------------------------
//Sensor Data Analyzer with Pointer Arithmetic (Bug Detection Scenario)

// Problem Statement

// A system records temperature readings from sensors. You are given:

// N sensor readings (integer values)
// You need to:

// Store readings in an array
// Use pointer arithmetic (not array indexing) to:
// Calculate sum
// Find maximum value
// Count how many readings are above average
// Display results in a formatted output
// ⚠️ Important Constraints:

// Use pointer arithmetic only (no arr[i] inside logic functions)
// No recursion
// No dynamic memory allocation
// Avoid common pointer bugs:
// Uninitialized pointer (wild pointer)
// A pointer declared but not initialized points to garbage memory.

 
// Wrong:
// int *ptr;     // wild pointer

// *ptr = 10;    // ❌ undefined behavior (may crash)
// Correct:
// int x = 10;

// int *ptr = &x;   // initialized
// OR

//              int *ptr = NULL; // safe initialization
// Out-of-bounds access
// Dangling pointer
// Input Format
// Enter number of readings: N
// Enter N readings:
// Output Format

// ================ SENSOR REPORT ================
// Total Readings: N
// Sum: X
// Average: Y
// Maximum: Z
// Readings above average: K
// ==============================================
// Sample Test Case

// Input:
// Enter number of readings: 5
// Enter readings: 10 20 30 40 50
// Output:

// ================ SENSOR REPORT ================
// Total Readings: 5
// Sum: 150
// Average: 30.00
// Maximum: 50
// Readings above average: 2
// ==============================================

//--------------------------------------------------------------------- SOLUTION ---------------------------------------------------------------------------------
// #include <stdio.h>

// int main() {
//     int N;

//     // Static array (fixed size, no malloc)
//     int readings[1000];        // max 1000 readings, no #define

//     // Pointer to the start of the array
//     int *ptr = readings;       // initialized

//     // Read number of readings
//     printf("Enter number of readings: ");
//     scanf("%d", &N);

//     // Read N temperature readings (ptr points to readings[0])
//     printf("Enter %d readings: ", N);
//     for (int i = 0; i < N; ++i) {
//         scanf("%d", ptr + i);  // pointer arithmetic, no arr[i]
//     }

//     // Compute sum and max using pointer arithmetic
//     int *p = ptr;              // points to first element
//     long long sum = 0;
//     int max = *(p + 0);        // first element

//     for (int i = 0; i < N; ++i) {
//         int val = *(p + i);    // pointer arithmetic
//         sum += val;
//         if (val > max) {
//             max = val;
//         }
//     }

//     // Compute average
//     double avg = (double)sum / N;

//     // Count how many readings are above average
//     int count_above_avg = 0;
//     for (int i = 0; i < N; ++i) {
//         int val = *(p + i);    // pointer arithmetic
//         if (val > avg) {
//             ++count_above_avg;
//         }
//     }

//     // Output formatted sensor report
//     printf("================ SENSOR REPORT ================\n");
//     printf("Total Readings: %d\n", N);
//     printf("Sum: %lld\n", sum);
//     printf("Average: %.2f\n", avg);
//     printf("Maximum: %d\n", max);
//     printf("Readings above average: %d\n", count_above_avg);
//     printf("==============================================\n");

//     return 0;
// }