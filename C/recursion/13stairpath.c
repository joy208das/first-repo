#include<stdio.h>

int stair(int n){

if(n==1 || n==2) return n;

return stair(n-1) +stair(n-2);

}
int main(){

 int n;
 printf("enter n");
 scanf("%d",&n);
 printf("%d",stair(n));

    return 0;
}