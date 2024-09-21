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