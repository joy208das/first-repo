#include<stdio.h>

void too (int n){
    for(int i=1;i<=n;i++){
    printf("hello world \n");}
    return;
}

int main(){

int n;
printf("enter n");
scanf("%d",&n);
too(n);


return 0;

}