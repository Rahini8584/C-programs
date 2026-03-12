// fxn  has three parts
// part 1 ------ fxn dec ---
// rt fxn-name()
// part 2 ---- fxn calling --
// fxn-name(value of argument if needed)
// part 3 ----- fxn def ---
// rt fxn-name(){
// }

// fxn has 4 types
//  1. NR NA
//  2. NR WA
//  3. WR NA
//  4. WR WA

// #include <stdio.h>
// void add();
// void add2( int, int);
// void arrPassing(int *);
// int main()
// {
    // add();
    // printf("\n");
    // int a, b;
    // scanf("%d %d",&a,&b);
    // add2(a,b);

//     int a[5] = {1, 2, 3, 4, 5};
//     arrPassing(a);

//     return 0;
// }

// void add(){
//     int a, b;
//     scanf("%d %d",&a,&b);
//     printf("Sum is %d",a+b);
// }

// void add2(int x,int y){
//     printf("sum= %d",x+y);
// }

// void arrPassing(int a[])
// {
//     int n = sizeof(int *) / 4;
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\n", a[i]);
//     }
// }
// #include <stdio.h>

// void arrPassing(int *a, int n);

// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};
//     arrPassing(a, 5);   // pass size explicitly
//     return 0;
// }

// void arrPassing(int a[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\n", a[i]);
//     }
// }

#include <stdio.h>
// int add(int, int);
int square(int);
int main(){
    // int a, b;
    // printf("Enter 2 numbers:\n");
    // scanf("%d %d",&a,&b);
    // int result = add(a,b);
    // printf("SUM IS %d",result);
    int n ;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int result=square(n);
    printf("square of %d is %d",n,result);

    return 0;
}
// int add(int a, int b){
//     int c = a+b;
//     return c;
// }

int square(int n){
    return n*n;
}
