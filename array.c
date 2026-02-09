#include<stdio.h>
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
    int n;
    scanf("%d",&n);

    int i , j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;


  
}