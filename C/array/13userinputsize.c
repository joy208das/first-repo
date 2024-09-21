#include<stdio.h>
int main()
{
  int a;
  printf("enter the size of array :");
scanf("%d",&a);

int arr[a];

for(int i=0;i<=a-1;i++){
    
    scanf("%d",&arr[i]);
    
}

for(int i=0;i<=a-1;i++){
    printf("%d ",arr[i]);
}

    return 0;
}