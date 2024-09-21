#include<stdio.h>


int main(){

    int a=25;
    int* x= &a; // int*-> int ar address sotre kore  

    printf("%d\n",*x);

    int** y= &x; // int** -> int* ar address ar store kore 
    printf("%d",**y); //**y -> y ar modde *x ar address. *x ar modde a ar address.so a ar value show koro.

    
  
 return 0;

}