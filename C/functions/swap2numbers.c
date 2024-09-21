#include<stdio.h>
int main(){

    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);

 int temp;
 temp=a;
 a=b;
 b=temp;
 printf("the value of a is %d \n",a);
 printf("the value of b is %d \n",b);
 return 0;

}