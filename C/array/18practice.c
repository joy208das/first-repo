//find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<stdio.h>

int main(){

int arr[7]={1,2,3,4,5,6,7};
int sumodd=0;
int sumeven=0;
for(int i=0;i<=6;i++){
    
if(arr[i]%2==0){
   sumeven=sumeven+arr[i];
}
else{

    sumodd=sumodd+arr[i];
}
 
}
printf("%d ",sumeven-sumodd);
    return 0;
}