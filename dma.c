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