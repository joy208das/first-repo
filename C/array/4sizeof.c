#include<stdio.h>

int main(){

  int arr[]={1,23,25,58,99,100} ;

 printf("%d",sizeof(arr)/sizeof(arr[0]));
 
    return 0;
}
// int sob somoy 4 bytes ar hoy.hortat memory 4 byte ar hoy
// akane arr variable ar size find korar jonno sizeof operator use kora hoy
//arr[0] dara vag korle size nirnoy hoy