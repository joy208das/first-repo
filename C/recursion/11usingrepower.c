#include<stdio.h>

int power(int a,int b){
  
  if (b==0) return 1;

  return a*power(a,b-1);

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