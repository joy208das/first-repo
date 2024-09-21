#include<stdio.h>

void too (int n){
    if(n==0) return; //base code
printf("hello world \n"); // code
too(n-1); //recursion call

    return;
}

int main(){

int n;
printf("enter n");
scanf("%d",&n);
too(n);


return 0;

}