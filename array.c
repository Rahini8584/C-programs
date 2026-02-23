#include<stdio.h>
#include<string.h>
int main(){
    // collection of elements of same data type
    // can be indexed
    // fixed in size 
    // worst case -- insertion 


    // int n;
    // scanf("%d\n",&n);
    // int a[n];
    // int sum = 0;
    // for(int i =0 ; i<n;i++){
    //     scanf("%d \n ",&a[i]);
    //     sum=sum+a[i];
    // }
    // printf("%d",sum);


    // int n;
    // scanf("%d", &n);  // Fixed: no \n
    // int a[n];
    // int sum = 0;
    // for(int i = 0; i < n; i++) {
    //     scanf("%d", &a[i]);  // Fixed: no extra spaces or \n
    //     sum += a[i];
    // }
    // printf("%d\n", sum);  // Added \n for clean output


    // int n ;
    // scanf("%d",&n);
    // int a[n];
    // int even_no=0 , odd_no =0;

    // for(int i = 0 ; i<n; i++){
    //     scanf("%d",&a[i]);
    //     if(a[i]%2==0){
    //         even_no+=1;
    //     }
    //     else{
    //         odd_no+=1;
    //     }
    // }

    // printf("odd no %d \n", odd_no);
    // printf(" even no %d ",even_no);




    // int a[2][2]={
    //               (1,2),
    //               (3,4)
    //             };
    
    // int b[2][2]={
    //                 (1,2),
    //                 (3,4)
    //             };

    // char name[50];
    // printf("Enter name: ");
    // scanf("%s", name);  // No & needed for arrays
    // printf("Hello, %s!\n", name);
    // return 0;


   // 3.)Write a c program to write 2 atrices of size 2*2 and display their sum matrix.
// #include <stdio.h>
// int main() {
//     int a[2][2], b[2][2], s[2][2], i, j;

//     printf("Enter first matrix:\n");
//     for(i=0;i<2;i++)
//         for(j=0;j<2;j++)
//             scanf("%d",&a[i][j]);

//     printf("Enter second matrix:\n");
//     for(i=0;i<2;i++)
//         for(j=0;j<2;j++)
//             scanf("%d",&b[i][j]);

//     printf("Sum matrix:\n");
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             s[i][j]=a[i][j]+b[i][j];
//             printf("%d ",s[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
    // int n   ;
    // scanf("%d",&n);
    // int i , j  , k=1;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
           
    //         printf("%d",k);
    //         if(i==j){
    //             printf("");
    //         }else{
    //         printf("*");
    //         }
            
    //         k++;
    //     }
    //     printf("\n");
    // }
    // int n;
    // scanf("%d",&n);

    // int i , j;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         printf("%d ",i*j);
    //     }
    //     printf("\n");
    // }


    // int n ; 
    // scanf("%d", &n);
    // int i , j;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n;j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // int n ;
    // scanf("%d", &n);
    // int i, j;
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=i;j++){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }


    // int n ;
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     int a;
    //     scanf("%d",&a);
    //     arr[i]=a;

    // }
    // int e=0,o=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         e++;
    //     }
    //     else{
    //         o++;
    //     }
    // }
    // printf(" no of even no. are %d\n",e);
    // printf("no of odd no. are %d\n",o);

    // int a[2][2], b[2][2], sum[2][2], i, j;

    // printf("Enter first matrix:\n");
    // for(i=0;i<2;i++)
    //     for(j=0;j<2;j++)
    //         scanf("%d",&a[i][j]);

    // printf("Enter second matrix:\n");
    // for(i=0;i<2;i++)
    //     for(j=0;j<2;j++)
    //         scanf("%d",&b[i][j]);

    // printf("Sum matrix:\n");
    // for(i=0;i<2;i++){
    //     for(j=0;j<2;j++){
    //         sum[i][j]=a[i][j]+b[i][j];
    //         printf("%d ",sum[i][j]);
    //     }
    //     printf("\n");
    // }


    // int m,n;
    // scanf("%d %d",&m,&n);
    // int a[m][n];
    // for(int i=0;i<3;i++){
    //     for(int j=1;j<3;j++){
    //         scanf("%d",&a[i][j]);
    //     }
    //     printf("\n");
    // }
    // for(int i=0;i<m;i++){
    //     for(int j=1;j<n;j++){
    //         int b[1][n];
    //         if(i==0){
    //             b[0][j]=a[0][j];
    //             a[0][j]=a[m][j];
    //             a[m][j]=b[0][j];
    //         }
    //         }
    //     }
    // printf("%d",a[m][n]);

    // #include <stdio.h>


    // int m, n;
    // scanf("%d %d", &m, &n);
    
    
    // int a[m][n];
    
    // for(int i = 0; i < m; i++) {
    //     for(int j = 0; j < n; j++) {
    //         scanf("%d", &a[i][j]);
    //     }
    // }
    
    // for(int j = 0; j < n; j++) {
    //     int temp = a[0][j];
    //     a[0][j] = a[m-1][j];
    //     a[m-1][j] = temp;
    // }
    // printf("\n");
    
    // for(int i = 0; i < m; i++) {
    //     for(int j = 0; j < n; j++) {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }
    

    // char  a[] ="Programming";
    // printf("%d",strlen(a));

    // char a[] = "computer";
    // char b[9] ;
    // strcpy(b,a);
    // printf("%s",b);



    /// strcat -- two concatenate two strings
    /// strcat(destination,source)
    // char a[]="Good";
    // char b[]="Morning";

    
    // printf("%s",strcat(a,b));
    // char a[]="India";
    // char b[]="india";


    // if(strcmp(a,b)==0){
    //     printf("strings are equal");
    // }
    // else{
    //     printf("strings are not equal");
    // }

    // char a[]="java";
    // char b[]="programming";
    // char c[]="C";
    // if(strlen(a)>strlen(b) && strlen(a)>strlen(c) ){
    //     printf("%s",a);
    // }
    // else if(strlen(b)>strlen(a) && strlen(b)>strlen(c)){
    //     printf("%s",b);
    // }
    // else{
    //     printf("%s",c);
    // }


    // char a[]="good";
    // char b[]="morning";
    // if(strcmp(a,b)!=0){
    //     printf("%s",strcat(a,b));
    // }
    // else{
    //     printf("%s",a);
    // }


    // char a[6];
    // scanf("%s",&a);
    // char b[] ="admin";

    // if(strcmp(a,b)==0){
    //     printf("Access granted");
    // }
    // else{
    //     printf("access denied");
    // }

    // char a[9];
    // scanf("%s",&a);
    // if(strlen(a)>=8){
    //     printf("Strong");
    // }
    // else{
    //     printf("Weak");
    // }

    // int i =1234;
    // int n;

    // n= i%10;
    // n=n/1000;
    // n=n+i;
    // printf("%d",n);




//     int n;int sum=0;

// printf(" Enter the number of elements (max 20): ");

// scanf("%d",&n);

// int a[n];

// for(int i=0;i<n;i++)

// {

// printf("Enter %d value: ",i);

// scanf("%d",&a[i]);

// printf("\n");

// }

// for(int i=0;i<n;i++)

// {

// printf("\nEntered value is = %d ",a[i]);

// sum=sum+a[i];

// }

// printf("\nSum= %d",sum);






    return 0;
}