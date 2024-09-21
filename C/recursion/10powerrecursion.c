#include<stdio.h>

int power(int a,int b){
  int x=1;
  for(int i=1;i<=b;i++){
x=x*a;

  }
return x;

}

int main(){

int a;
printf("enter a");
scanf("%d",&a);
int b;
printf("enter b");
scanf("%d",&b);

int final =power(a,b);
printf("%d",final);

return 0;

}