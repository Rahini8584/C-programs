#include<stdio.h>

struct Student{
    char student_name[10];
    int marks1;
    int marks2;
    int marks3;
};
int main(){
    struct Student s1;
    printf("ENTER NAME : ");
    scanf("%9s",&s1.student_name);
    printf("enter marks of 3 subjects :  ");
    scanf("%d" "%d" "%d",&s1.marks1,&s1.marks2,&s1.marks3);
   
    printf("Name : %s\n",s1.student_name);
    printf("Average marks : %d\n",(s1.marks1+s1.marks2+s1.marks3)/3);

    return 0 ;
    
}