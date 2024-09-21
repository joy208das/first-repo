#include<stdio.h>

void fun(int a[]){
a[1]=25;
return ;
}

int main(){

  int arr[3]={2,5,69};
printf("%d\n",arr[1]);
  fun(arr);
printf("%d",arr[1]);
    return 0;
}

//array ar modde pointer ar moto kaj kore na
//***pointer chara o value swap kora jay