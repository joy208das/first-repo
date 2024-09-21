//Write a program to copy the contents of one array into another in the reverse order.

#include<stdio.h>

int main(){

int arr[7]={1,2,3,4,5,6,7};
int brr[7];
int i;
for(int i=0;i<=6;i++){

    brr[i]=arr[6-i];    //7-1-i  index no. theke minus hobe 
}
for(int i=0;i<=6;i++){

printf("%d ",brr[i]);

}


    return 0;
}