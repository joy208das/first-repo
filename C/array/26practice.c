// Find the duplicate element in the given array

#include<stdio.h>
int main(){

int arr[7]={1,24,5,6,5,9,24,3};

for(int i=0;i<=6;i++){
    for(int j=i+1;j<=6;j++){
        if(arr[i]==arr[j]){ 
            printf("%d is the duplicate element\n",arr[i]);
    break;
    }}
}


    return 0;
}