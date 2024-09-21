//given an array of intergers,change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.


#include<stdio.h>

int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,10};
for(int i=0;i<=9;i++){
if(arr[i]%2==0){
    printf("%d ",arr[i]+10);
}
else{
    printf("%d ",arr[i]*2);
}}
    return 0;
}