 #include<stdio.h>

int main(){

  int marks[3];        //array declare,[] ar bitor size take 

 printf("phy=");
 scanf("%d",&marks[0]);  //for imput in array

 printf("chem=");
 scanf("%d",&marks[1]);
 
 printf("math=");
 scanf("%d",&marks[2]);


 printf("phy=%d , chem=%d, math=%d",marks[0],marks[1],marks[2]);
 
    return 0;
}
// []-ar bitor ja thake tai size.size jodi bole dewa hoy tahole oitar tar size
// kintu bole na dile jemon-(int marks[]={52,89,69}) akane bola nei size ,kintu {}-ar bitor 3 ta marks ache,tai size automatic 3 dore nibe.