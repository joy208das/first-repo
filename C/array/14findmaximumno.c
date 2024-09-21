//find the maximum value out of all the elements in the array

#include<stdio.h>
int main()
{
int arr[5]={12,58,788,45,14};
int max=arr[0];

for(int i=0;i<=4;i++){
    if(max<arr[i]){
   max=arr[i];
    }
   
}
printf("%d",max);


    return 0;
}

// new library function
/*  #include<limits.h>
   int a=INT_MIN;

computer ar interger ar sob cheye chuto value k nirdesh kore INT_MIN
*/