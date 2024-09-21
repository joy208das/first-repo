//count the number of elements in given array greater than a given number x.

#include<stdio.h>

int main(){

int arr[10]={7,58,4,2,5,14,58,14,9,14};
int x=7;
int count=0;
for(int i=0;i<=9;i++){
    
if(arr[i]>x){
    count ++;
    printf("%d ",count);
}

}
    return 0;
}
// oise na