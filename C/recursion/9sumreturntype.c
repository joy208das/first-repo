#include<stdio.h>

int sum(int n){
    if(n==0 ) return 0;
    return n+sum(n-1);
}

int main(){

int n;
printf("enter n");
scanf("%d",&n);
int final =sum(n);
printf("sum is:%d",final);

return 0;

}