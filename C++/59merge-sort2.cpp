/*merge sort - j koste bujsi re vai*/

#include<iostream>
using namespace std;

void merge(int arr[],int l,int  mid,int e){
 
 int x=mid-l+1; // size of letf merged array
 int y=e-mid;  //size of right merged array

 int a[x];     //1st merged array
 int b[y];   //2nd ...

 for(int i=0;i<x;i++){
    a[i]=arr[l+i];              // store the merged array

 }
 for(int i=0;i<y;i++){
    b[i]=arr[mid+1+i];
 }

int i=0;
int j=0;
int k=l;

while(i<x && j<y){
if(a[i]<b[j]){
     arr[k]=a[i];
     i++;
     k++;
}
else {
    arr[k]=b[j];
    j++;
    k++;
}
}

//jodi 2 ta  array ar jekunutir kunu element last ar dike baki thake
while(i<x){
    arr[k]=a[i];
     i++;
     k++;
}
while(j<y){
    arr[k]=b[j];
     j++;
     k++;
}

}

//1st merging
void mergeSort(int arr[],int l,int e){
  if(l<e){

int mid=l+(e-l)/2;

mergeSort(arr,l,mid);
mergeSort(arr,mid+1,e);
merge(arr,l,mid,e);
  }
}

int main(){

 int arr[8]={2,3,1,4,7,8,5,6};
 int n=8;
 mergeSort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

}

return 0;
}