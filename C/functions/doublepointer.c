#include<stdio.h>


int main(){

    int a=25;
    int* x= &a; // int*-> int ar address sotre kore  

    printf("%p\n",&x);

    int** y= &x; // int** -> int* ar address ar store kore 
    printf("%p",&y);

    
  
 return 0;

}