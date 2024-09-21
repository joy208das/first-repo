/*merge sort - j koste bujsi re vai*/

#include<iostream>
using namespace std;

void merge(int arr[],int l,int  mid,int e){
 
 int i=l;
 int j=mid +1;
 int k=l;
 int x=mid-l+1;
 int y=e-mid;       // ager merge kora duita array r size
 int brr[x+y];       //final notun array
 while(i<=mid && j<=e){
    if(arr[i]<arr[j]){
        brr[k]=arr[i];
        i++;
        k++;
    }
    else {
         brr[k]=arr[j];
         j++;
         k++;
    }
 }

    if(i>mid){
        while(j<=e){
        brr[k]=arr[j];
        j++;k++;
    }
    }
    else {
          while(i<=mid){
            brr[k]=arr[i];
i++;k++;
    }
    }

for(int k=l;k<=e;k++){
    arr[k]=brr[k];
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