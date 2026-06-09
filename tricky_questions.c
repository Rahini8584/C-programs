// #include<stdio.h>
// int main(){

//     // int n ;
//     // scanf("%d",&n);
//     // if(n<=0){
//     //     printf("RED\n");
//     // }
//     // else if(n<=50){
//     //     printf("yellow");
//     // }
//     // else{
//     //     printf("green");
//     // }
//     char signal[50];
//     scanf("%s",&signal);
//     if(signal=="red" || signal=="RED"){
//         printf("STOP\n");
//     }
//     else if(signal=="yellow" || signal=="YELLOW"){
//         printf("wait\n");
//     }
//     else if(signal=="green" || signal=="GREEN"){
//         printf("go\n");
//     }

//     return 0 ; 
// }
// #include <stdio.h>
// #include<string.h>
// enum PaymentMethod{
//     cash =1,
//     upi,
//     card
// };
// struct Order{
//     int orderId;
//     char customerName[31];
//     char fooditemName[31];
//     int quantity;
//     float price;
//     float totalbill;
//     float discount;
//     float finalbill;
//     enum PaymentMethod paymentmethod;
// };
// void calculateBill(struct Order *o){
//     o->totalbill=o->quantity * o->price;
//     o->discount=0.0;
//     o->finalbill= o->totalbill;
// }
// void applydiscount(struct Order orders[], int n){
//     int i ;
//     for(i=0;i<n;i++){
//         if(orders[i].totalbill>=5000)
//             orders[i].discount=orders[i].totalbill * 0.20;
//         else if(orders[i].totalbill>=3000)
//             orders[i].discount=orders[i].totalbill*0.10 ;
//         else if(orders[i].totalbill>=1000){
//             orders[i].discount=orders[i].totalbill*0.05;
//         }
//         else{
//             orders[i].discount= 0.0;
//         }

//         orders[i].finalbill = orders[i].totalbill  - orders[i].discount;
//     }
// }

// void displayAllOreders(struct Order orders[],int n){
//     int i;
//     printf("\nOrder Details\n");
//     for(i =0;i<n;i++){
//         printf("\nOrder ID : %d\n", orders[i].orderId);
//         printf("Customer Name : %s\n", orders[i].customerName);
//         printf("Food Item : %s\n", orders[i].fooditemName);
//         printf("Original Bill : %.2f\n", orders[i].totalbill);
//         printf("Discount : %.2f\n", orders[i].discount);
//         printf("Final Bill : %.2f\n", orders[i].finalbill);
//         printf("Payment Method : %s\n", getPaymentMethodName(orders[i].paymentmethod));
//     }
// }

// void searchOrderById(struct Order orders[], int n, int id) {
//     int i, found = 0;

//     for (i = 0; i < n; i++) {
//         if (orders[i].orderId == id) {
//             printf("\nOrder Found\n");
//             printf("\nOrder ID : %d\n", orders[i].orderId);
//             printf("Customer Name : %s\n", orders[i].customerName);
//             printf("Final Bill : %.2f\n", orders[i].finalbill);
//             found = 1;
//             break;
//         }
//     }

//     if (!found) {
//         printf("\nOrder Not Found\n");
//     }
// }

// void highestBillCustomer(struct Order orders[], int n) {
//     int i, maxIndex = 0;

//     for (i = 1; i < n; i++) {
//         if (orders[i].finalbill > orders[maxIndex].finalbill) {
//             maxIndex = i;
//         }
//     }

//     printf("\nHighest Bill Customer\n");
//     printf("\nOrder ID : %d\n", orders[maxIndex].orderId);
//     printf("Customer Name : %s\n", orders[maxIndex].customerName);
//     printf("Final Bill : %.2f\n", orders[maxIndex].finalbill);
// }

// const char* getPaymentMethodName(enum PaymentMethod method) {
//     switch (method) {
//         case cash:
//             return "Cash";
//         case upi:
//             return "UPI";
//         case card:
//             return "Card";
//         default:
//             return "Unknown";
//     }
// }
// void AcceptOrders(struct Order orders[],int n){
//     int i;
//     for(i = 0;i<n;i++){
//         scanf("%d",&orders[i].orderId);
//         scanf("%s", orders[i].customerName);
//         scanf("%s", orders[i].fooditemName);
//         scanf("%d", &orders[i].quantity);
//         scanf("%f", &orders[i].price);
//         scanf("%d", (int *)&orders[i].paymentmethod);
        
//         calculatebill(&orders[i]);

//     }
// }
// int main(){
//     int n , choice , searchId;
//     scanf("%d",&n);
//     if(n<=0|| n>50){
//         printf("Invalid Number of Orders\n");
//         return 0 ;
//     }
//     struct Order orders[n];
//     AcceptOrders(orders,n);
//     while(1){
//         printf("\n1. Apply Discount\n");
//         printf("2. Display All Orders\n");
//         printf("3. Search Order by ID\n");
//         printf("4. Highest Bill Customer\n");
//         printf("5. Exit\n");

//         printf("\nEnter Choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 applyDiscount(orders, n);
//                 printf("\nDiscount Applied Successfully\n");
//                 break;

//             case 2:
//                 displayAllOrders(orders, n);
//                 break;

//             case 3:
//                 printf("\nEnter Order ID to Search: ");
//                 scanf("%d", &searchId);
//                 searchOrderById(orders, n, searchId);
//                 break;

//             case 4:
//                 highestBillCustomer(orders, n);
//                 break;

//             case 5:
//                 printf("\nProgram Exited Successfully\n");
//                 return 0;

//             default:
//                 printf("\nInvalid Choice\n");
//         }
//     }

//     return 0;
// }
