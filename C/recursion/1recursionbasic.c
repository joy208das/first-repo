#include<stdio.h>

int factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}

int main(){

int n;
printf("enter n");
scanf("%d",&n);
int fact = factorial(n);
printf("factorial is:%d",fact);

return 0;

}