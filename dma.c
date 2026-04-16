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

// #include <stdio.h>
// void marks_details(int a[] , int n ){
//     int max = a[0];
//     int min = a[0];
//     int sum = 0;
//     for(int i = 0 ; i<n ; i++){
//         sum = sum +a[i];
//         if(max<a[i]){
//             max=a[i];
//         }
        

//         if(min>a[i]){
//             min=a[i];
//         }
        
//     }
//     printf("Highest marks : %d\n",max);
//     printf("Lowest marks : %d\n",min);
//     printf("Average marks : %.2f",(float)sum/n);

// }
// int main(){

//     int n ;
//     printf("Enter no. of students : ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter marks of students : ");
//     for(int i = 0 ; i<n; i++){
//         scanf("%d",&arr[i]);
//     }

//     marks_details(arr,n);

//     return 0;

// }


// #include<stdio.h>


// void temp_details(int arr[] , int n){
//     int hot_days = 0 ;
//     int cold_days = 0 ;
//     int sum = 0 ;
//     for(int i  = 0 ; i<n ; i++){
//         sum = sum + arr[i];
//         if(arr[i]>30){
//             hot_days++;
//         }

//         if(arr[i]<15){
//             cold_days++;
//         }
//     }
//     printf("Hot days : %d\n",hot_days);
//     printf("Cold days : %d\n",cold_days);
//     printf("Average Temp : %.2f\n",(float)sum/n);
// }
// int main(){
//     int n ; 
//     printf("Enter no. of days : ");
//     scanf("%d",&n);
//     int arr[n] ;
//     printf("enter the temperature for N days : ");
//     for(int i = 0 ; i < n ; i++ ){
//         scanf("%d",&arr[i]);
//     }
//     temp_details(arr,n);
//     return 0 ;
// }