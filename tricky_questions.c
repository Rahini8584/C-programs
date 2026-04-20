#include<stdio.h>
int main(){

    // int n ;
    // scanf("%d",&n);
    // if(n<=0){
    //     printf("RED\n");
    // }
    // else if(n<=50){
    //     printf("yellow");
    // }
    // else{
    //     printf("green");
    // }
    char signal[50];
    scanf("%s",&signal);
    if(signal=="red" || signal=="RED"){
        printf("STOP\n");
    }
    else if(signal=="yellow" || signal=="YELLOW"){
        printf("wait\n");
    }
    else if(signal=="green" || signal=="GREEN"){
        printf("go\n");
    }

    return 0 ; 
}