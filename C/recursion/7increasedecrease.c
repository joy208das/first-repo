#include<stdio.h>

void too (int n){
    if(n==0) return;

printf("%d\n",n);
too(n-1);
printf("%d\n",n);
    return;
}

int main(){

int n;
printf("enter n");
scanf("%d",&n);
too(n);


return 0;

}