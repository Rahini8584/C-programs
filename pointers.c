#include<stdio.h>
// POINTER is a variable used to store address of a variable

int main(){
    int a= 10;
    int *p = &a;
    printf("%d\n",a);
    printf("%p\n",p);

    return 0;
}