//Rotate the given array 'a' by k steps, where k is non-negative
//note: k can be greater than n as well where n is the size of array 'a'


#include<stdio.h>

void reverse(int arr[],int ai,int aj){

int i=ai;
int j=aj;
while(i<j){

int temp= arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}
return ;
}

int main(){
    
 int arr[7]={1,2,3,4,5,6,7};
int n=7; // size of array 
int k=3;
k=k%n;
reverse(arr,0,6);
reverse(arr,0,k-1);
reverse(arr,k,n-1);

for(int i=0;i<=6;i++){
    
printf("%d ",arr[i]);}



    return 0;
}