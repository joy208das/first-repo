/*quick sort from jenny madam(jenny's lecture)*/

#include<iostream>
using namespace std;

int partition(int arr[],int l, int e){
int pivot=arr[l];
int start =l;
int end=e;

while(start<end){
    while(arr[start]<=pivot){
       start ++;
    }
    while(arr[end]>pivot){
        end--;
    }
    if(start< end){
        swap(arr[start],arr[end]);
    }
}
swap(arr[l],arr[end]);
return end;
}


int quickSort(int arr[],int l,int e ){
 if(l<e){
int location=partition(arr,l,e);
quickSort(arr,l,location-1);
quickSort(arr,location+1,e);
}
}
int main(){
  
   int arr[9]={2,1,5,4,3,7,8,6,9};
   int n=9; //size of arr

   quickSort(arr,0,n-1);

   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}