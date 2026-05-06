// #include <stdio.h>
// #include<stdarg.h>

// int sum(int count , ...){
//     va_list args ;
//     va_start(args,count);

//     int total = 0 ;
//     for(int i = 0 ; i<count;i++){
//         total+= va_arg(args,int);
//     }

//      va_end(args);
//      return total ;

// }

// void argument(int count,...){
//     va_list args ;
//     va_start(args,count);
//     int arr[count];
//     for( int i = count ; i>0 ;i--){
//         arr[i-1]=va_args(args, int);
//         printf
//     }
//     va_end(args);
// }


// int main(){

//     // printf("%d\n",sum(3,1,2,3));
//     // printf("%d\n",sum(5,1,2,3,4,5));
//     // argument(2,1,2);
//     return 0;
// }


#include <stdio.h>
#include <stdarg.h>

void print_reverse(int count, ...) {
    int nums[100];  // Assuming max 100 args
    va_list args;
    va_start(args, count);
    
    // Store all arguments forward
    for(int i = 0; i < count; i++) {
        nums[i] = va_arg(args, int);
    }
    va_end(args);
    
    // Print in reverse
    for(int i = count - 1; i >= 0; i--) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    print_reverse(4, 1, 2, 3, 4);
    // Output: 4 3 2 1 
    return 0;
}