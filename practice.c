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






#include<stdio.h>
#include<math.h>



// int add(int a, int b){
//     return a+b;
// }
// int square(int n){
//     return n*n;
// }
// void checkEvenOdd(int n){
//     if(n%2==0){
//         printf("EVEN");
//     }
//     else{
//         printf("ODD");
//     }
// }
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i<=n ;i++){
//         fact = fact * i;
//     }
//     return fact ;

// }
// int findLargest(int a , int b , int c){
//     if(a>b && a>c){
//         return a;
//     }
//     else if(b>a && b>c){
//         return b;
//     }
//     else{
//         return c;
//     }
// }
// int reverseNumber(int n){
//      int rem =0 ;
//     int rev = 0 ;
   
//     while(n!=0){
//         rem= n%10;
//         rev = rev*10+rem;
//         n=n/10;
//     }
//     return rev ;
// }
// int isArmstrong(int n){

//     int rem = 0;
//     int sum = 0 ;
//     int temp = n;
//     int count = 0 ;
//     int s = n;

//     while(s!=0){
//         s%10;
//         count++;
//         s=s/10;
//     }
//     while(temp!=0){
//         rem = temp%10 ;
//         sum += pow(rem,count);
//         temp = temp/10;
//     }
//     if(sum==n){
//         return 1 ;
//     }
//     else {
//         return 0 ;
//     }
// }
// int* getAddress(int *x){
//     return x;
// }



// void swap(int *a , int *b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
// }



// void reversearray(int *arr , int size){
//     int *start = arr ;
//     int *end = arr + size -1;
//     int temp ;
//     while(start <end){
//         temp = *start ;
//         *start = *end ;
//         *end = temp ;
//         start++ ;
//         end--;
//     }
// }

// // struct StudentMarks{
// //     char studentName[50];
// //     int marks[3];

// // };

// // struct student{
// //     char name[50];
// //     int marks ;

// // };


// struct point{
//     int x ;
//     int y ;
// };



// struct product{
//     char name[50];
//     int price ;
// };


// enum grades{
//     A = 1,
//     B = 2,
//     C = 3
// };

// struct student{
//     int roll_number ;
//     char name[30];
//     int age ; 
//     int marks ;
//     enum grades grade ;

// };
// void displayStudentDetails(struct student ptr[] , int n ){
//     printf("Student details \n");
//     int highest_marks_index= 0;
    

//     for(int i = 0 ; i<n; i++){
//         printf("Roll Number : %d\n",ptr[i].roll_number);
//         printf("Name : %s\n",ptr[i].name);
//         printf("Age : %d\n",ptr[i].age);
//         printf("Marks : %d\n",ptr[i].marks);
//         printf("grade : %c\n",ptr[i].grade);
//         printf("\n");
//         if(ptr[i].marks>ptr[highest_marks_index].marks){
//             highest_marks_index=i;
//         }
//     }

//     printf("Highest Marks Student\n");
//     printf("Roll Number : %d\n",ptr[highest_marks_index].roll_number);
//     printf("Name : %s\n",ptr[highest_marks_index].name);
//     printf("Marks : %d\n",ptr[highest_marks_index].marks);
//     printf("\n");

// }

// enum categories {
//     fiction = 1,
//     science ,
//     technology ,
//     history 
// };

// struct book {
//     int id ;
//     char name[50];
//     char author[50];
//     int copies ;
//     enum categories category ;
// };
// void inputBookData(struct book *b){
//     int choice;
//     printf("Enter Book ID: ");
//     scanf("%d",&b->id);
//     printf("Enter Book name : ");
//     scanf("%49s",b->name);
//     printf("Enter Author Name: ");
//     scanf("%49s",b->author);
//     printf("Enter category choice -> (1-fiction,2-science,3-technology,4-history) : ");
//     scanf("%d",&choice);
//     b->category = choice;

// }

// void dispayBookDetails(struct book b){
//     printf("\nBook ID: %d\n",b.id);
//     printf("Book Name: %s\n",b.name);
//     printf("Author: %s\n",b.author);
//     printf("No. of Copies: %d\n",b.copies);

//     if(b.category==fiction){
//         printf("Category : Fiction");
//     }
//     else if(b.category==science){
//         printf("Category : Science");
//     }
//     else if(b.category==technology){
//         printf("Category : Technology");
//     }
//     else{
//         printf("Category : History");
//     }

// }
// void maximumCopies(struct book b[],int n){
//     int index = 0;
//     for(int i = 0 ; i<n;i++){
//         if(b[i].copies>b[index].copies){
//             index = i;
//         }
//     }
//     printf("%s hax maximum copies(%d)",b[index].name,b[index].copies);
// }


// enum payment_options{
//     cash =1,
//     upi,
//     card
// };
// struct Order {
//     int id ;
//     char customer[30];
//     char food_item[30];
//     int qty ;
//     int price ;
//     enum payment_options method ;
// };
// void inputOrder(struct Order *ptr[] ,int n){
//     int choice ;
//     for(int i = 0 ; i<n; i++){
//         printf("Enter order id:");
//         scanf("%d",&ptr[i]->id);
//         printf("Enter your Name:");
//         scanf("%s",ptr[i]->customer);
//         printf("Enter food item: ");
//         scanf("%s",ptr[i]->food_item);
//         printf("enter quantity: ");
//         scanf("%d",&ptr[i]->qty);
//         printf("Enter price per item :");
//         scanf("%d",&ptr[i]->price);
//         printf("enter your choice of payment method (1-cash , 2-UPI, 3- card)");
//         scanf("%d",&choice);
//         choice=ptr[i]->method;
//     } 
// }
// void displayOrder(struct Order *ptr[] ,int n){
//     printf("ORDER DETAILS \n");
//     for(int i = 0 ; i<n ; i++){
//         printf("Order ID : %d\n",ptr[i]->id);
//         printf("Customer Name : %s\n",ptr[i]->customer);
//         printf("Food Item : %s\n",ptr[i]->food_item);
//         printf("Original Bill : %d\n",ptr[i]->price * ptr[i]->qty);
//         printf("Discount :");
//         printf("Final Bill : ");
//         if(ptr[i]=)

//     }
// }
// enum payment{
//     cash=1,
//     upi,
//     card
// };

// struct Order{
//     int id;
//     char customer_name[30];
//     char food_item[30];
//     int qty;
//     int price;
//     enum payment choice;
     
// };

// void total_bill(struct Order ptr[],int n){
//     total_bill=ptr[i]
// }

// int main(){
//     printf("1. Apply Discount \n");
//     printf("2. Display All Orders \n");
//     printf("3. Search order by ID \n");
//     printf("4. Highest Bill customer \n");
//     printf("5. Exit\n");
















    // int a, b ;
    // scanf("%d %d",&a,&b);
    // int result = add(a,b);
    // printf("%d",result);
    // int m;
    // scanf("%d",&m);
    // int result =isArmstrong(m);
    // printf("%d",result);
    // int x, y , z;
    // scanf("%d %d %d",&x,&y,&z);
    // int result = findLargest(x,y,z);
    // printf("%d",result);

    // int a = 10 ;
    // int *p =getAddress(&a);
    // printf("%d",*p);

    // int a = 10 , b= 20 ;
    // int *pa = &a ;
    // int *pb = &b ;
    // *pa = 20 ;
    // *pb = 10 ;
    // printf("value of a is %d",*pa);
    
    // int a , b ;
    // scanf("%d %d",&a,&b);
    // swap(&a,&b);
    // printf("%d %d",a,b);
    
    // int arr[] = {1,2,3,4,5,6,7};

    // int size = sizeof(arr)/sizeof(arr[0]);
    // reversearray(arr,size);
    // for(int i = 0 ;i<size; i++){
    //     printf("%d ",arr[i]);
    // }



    // struct StudentMarks student ;
    // int total =0;
    // scanf("%s",student.studentName);
    // for(int i = 0 ; i<3 ; i++){
    //     scanf("%d",&student.marks[i]);
    //     total += student.marks[i];
    // }
    // printf("%d",total);


    // struct student std[3];
    // int highestindex = 0 ;
    // for(int i =  0 ; i < 3; i++){
    //     scanf("%s",std[i].name);
    //     scanf("%d",&std[i].marks);
    // }
    // for(int i = 0 ; i <  3 ; i++){
    //     if(std[i].marks>std[highestindex].marks){
    //         highestindex = i;
    //     }
    // }
    // printf("%s",std[highestindex].name);

    // struct point points[2];
    // for(int i = 0 ; i< 2 ;i++){
    //     scanf("%d %d",&points[i].x,&points[i].y);
    // }
    // int distance = sqrt(pow((points[1].x-points[0].x),2)+pow((points[1].y-points[0].y),2));
    // printf("Distance is %d",distance);



    // struct product products ;
    // struct product *ptr = &products;
    // scanf("%s %d",ptr->name,&ptr->price);
    // float discount = 0.8* ptr->price;
    // printf("Product : %s\n",ptr->name);
    // printf("Price : %d\n",ptr->price);
    // printf("Final Price after 20 percent  Discount : %.2f",discount);

    // int n ;
    // printf("enter no. of students : \n");
    
    // scanf("%d",&n);

    // struct student s[n];
    // int g;
    // for(int i = 0 ;i<n;i++){
    //     scanf("%d %s %d %d %d",
    //         &s[i].roll_number,
    //         s[i].name,
    //         &s[i].age,
    //         &s[i].marks,
    //         &g);
    //     s[i].grade=g;
    // }
    
    // displayStudentDetails(s,n);
    // int n ;
    // printf("Enter no. of books : ");
    // scanf("%d",&n);
    // struct book bk[n];
    // for(int i = 0 ; i<n ; i++){
    //     printf("\nEnter Details of Book \n");
    //     inputBookData(&bk);
    // }
    // for(int i = 0 ; i< n;i++){
    //     printf("\n Book Details\n");
        
    // }


//     return 0 ;
// }


// #include<stdio.h>
// int main(){
//     int arr[10];
//     for(int i = 0 ; i<10; i++){
//         scanf("%d",&arr[i]);
//     }
//     int neg = 0 , pos = 0 ;
//     for(int i = 0 ; i<10 ; i++){
//         if(arr[i]>0){
//             pos++;
//         }
//         else{
//             neg++;
//         }
//     }
//     printf("%d\n",pos);
//     printf("%d",neg);
//     return 0 ;
// }

// #include<stdio.h>
// struct Student{
//     int id;
//     char student_name[30];
//     char department[30];
//     int semester;
//     char subjects

// // };
// int main(){
//     int a, b , c, d , e;
//     scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//     int result_default;
//     float result_modified;
//     if(d==0){
//         printf("Division by zero is not allowed");
//         return 0 ;
//     }
//     result_default=+b*c/d-e;
//     result_modified= ((a+b)-e)*(c/(float)d);
//     printf("Result with default operator precedence %d\n",result_default);
//     printf("Result with modified operator precedence %f",result_modified);
//     return 0 ;

// }
// #include<stdio.h>
// enum grades{
//     A=1,B,C
// };
// struct student{
//     int rollnumber;
//     char name[20];
//     int age;
//     int marks;
//     enum grades grade;
// };
// void inputdetails(struct student students[], int n){
//     int choice;
//     for(int i =0 ; i<n ; i++){
//         scanf("%d",&students[i].rollnumber);
//         scanf("%s",students[i].name);
//         scanf("%d",&students[i].age);
//         scanf("%d",&students[i].marks);
//         printf("enter the following for respective grades-> A-1 , B-2 , C-3\n");
//         scanf("%d",&choice);
//         students[i].grade=choice;
//     }
// }
// void printdetails(struct student students[] , int n){
//     printf("\nStudent details\n");
//     for(int i = 0 ; i<n ; i++){
//         printf("Roll Number : %d\n",students[i].rollnumber);
//         printf("Name : %s\n",students[i].name);
//         printf("Age : %d\n",students[i].age);
//         printf("Marks : %d\n",students[i].marks);
//         if(students[i].grade==1){
//             printf("A");
//         }
//         else if(students[i].grade==2){
//             printf("B");
//         }
//         else{
//             printf("C");
//         }
//         printf("\n");
//     }
// }
// void highestmarks(struct student students[], int n ){
//     int index = 0 ;
//     for(int i = 0 ; i<n ; i++){
//         if(students[index].marks<students[i].marks){
//             index= i;
//         }
//     }
//     printf("\n Highest Marks Student\n");
//     printf("Roll Number : %d\n",students[index].rollnumber);
//     printf("Name : %s\n",students[index].name);
//     printf("Marks : %d\n",students[index].marks);
// }
// int main(){
//     int n ;
//     scanf("%d",&n);
//     struct student students[n];

  
//     inputdetails(students,n);
//     printdetails(students,n);
//     highestmarks(students,n);
//     return 0 ;
// }
// #include<stdio.h>
// enum categories{
//     fiction =1 ,
//     science,
//     technology,
//     history
// };
// struct book{
//     int id;
//     char bookname[30];
//     char author[30];
//     int copies;
//     enum categories category;
// };
// void inputdetails(struct book books[],int n){
//     int  choice;

//     for(int i = 0 ; i<n; i++){
//         scanf("%d",&books[i].id);
//         scanf("%s",books[i].bookname);
//         scanf("%s",books[i].author);
//         scanf("%d",&books[i].copies);
//         printf("enter following number for respective category (1-Fiction, 2-Sciene , 3-Technology , 4-History)\n");
//         scanf("%d",&choice);
//         books[i].category=choice;
//     }
// }
// void printdetails(struct book books[], int n){
//     printf("\n Book Details\n");
//     printf("\n");
//     for(int i = 0 ; i<n; i++){
//         printf("Book ID : %d\n",books[i].id);
//         printf("Book Name : %s\n",books[i].bookname);
//         printf("Author : %s\n",books[i].author);
//         printf("Copies : %d\n",books[i].copies);
//         // printf("Category : %d\n",books[i].category);
//         if(books[i].category==1){
//             printf("Category : Fiction\n");
//         }
//         else if(books[i].category==2){
//             printf("Category : Science\n");
//         }
//         else if(books[i].category==3){
//             printf("Category : Technology\n");
//         }
//         else{
//             printf("Category : History\n");
//         }
//         printf("\n");
//     }
//     printf("\n");
// }
// void searchbookbyid(struct book books[], int n, int searchid){
//     int index = 0;

//     for(int i = 0; i<n ;i++){
//         if(searchid==books[i].id){
//             index = i;
//             printf("Searched Book Found\n");
//             printf("Book ID : %d\n",books[index].id);
//             printf("Book Name : %s\n",books[index].bookname);
//             printf("Author : %s\n",books[index].author);
//             printf("Copies : %d\n",books[index].copies);
//             printf("\n");

// }
// }
// }
// void maximumcopies(struct book books[],int n){
//     int index  = 0 ;
//     for(int i = 0 ; i < n ; i++){
//         if(books[index].copies<books[i].copies){
//             index = i ;
//         }
//     }
//     printf("Book With Maximum Copies\n");
//     printf("Book ID : %d\n",books[index].id);
//     printf("Book Name : %s\n",books[index].bookname);
//     printf("Copies : %d\n",books[index].copies);
// }
// int main(){
//     int n , searchid;
//     scanf("%d",&n);
//     struct book books[n];
//     inputdetails(books,n);
//     scanf("%d",&searchid);
//     printdetails(books,n);
//     searchbookbyid(books,n,searchid);
//     maximumcopies(books,n);
//     return 0 ;
// }