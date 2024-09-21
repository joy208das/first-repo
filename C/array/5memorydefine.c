#include<stdio.h>

int main(){

  int age=25 ;
  int *ptr= &age;
  
 printf("%u",ptr);
 ptr++;
 printf("\n");
 printf("%u",ptr);

    return 0;
}
// *ptr diye address store korlam
// int ar memory size 4 bytes
//tai ptr++ koray memory 4 bytes bere jabe
// char ar ketre 1 byte bare