/*find a element in sorted-rooted array
arr[5]={2,1,3,9,7};
arr[5]={1,2,3,7,9}; --sorted array
arr[5]={7,9,1,2,3}; --rooted array(sorted-rooted array)

*/
#include<iostream>
using namespace std;

int getpivot(int arr[],int n){

  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;

  while(s<e){
      if(arr[mid]>=arr[0]){
        s=mid+1;
      }
     else {
        e=mid;
     }
     mid=s+(e-s)/2;
  }
  return s;

 }

int binarySearch(int arr[],int s,int e,int key){


 int mid=s+(e-s)/2;

 while(s<=e){
    if(arr[mid]==key){
        return mid;
    }
    else if(key>arr[mid]){
        s=mid+1;
    }
    else {
        e=mid-1;
    }
    mid=s+(e-s)/2;
 }

return -1;
}


int main(){
  int arr[5]={7,9,1,2,3};

   int pivot=getpivot(arr,5);
   cout<<pivot<<endl;
  if(arr[4]>=arr[pivot] && arr[4]<=arr[5-1]){
    cout<<"the index of searching  element is:"<<binarySearch(arr,pivot,5-1,3)<<endl;
  }
  else {
    cout<<"the index of searching element is:"<<binarySearch(arr,0,pivot-1,3)<<endl;
  }

    return 0;
}
