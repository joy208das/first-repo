/*Find the total occurence of 5
arr[7]={1,3,5,5,5,6,9}

formula=(last occurence-first occurence)+1

*/


#include<iostream>
using namespace std;

int first(int arr[],int size,int key){

   int start=0;
   int end=size-1;
 int mid=start+(end-start)/2;
 int ans=-1;

  while(start<=end){
  if(arr[mid]==key) {
    ans=mid;
    end=mid-1;
  }
  // if arr[mid]!=key let's findout the path
      else if(key>arr[mid]){
        start=mid+1;
      }
        else{
            end=mid-1;
        }
       mid=start+(end-start)/2;  //update mid for new midline.

  }
return ans;

}

int last(int brr[],int size,int key){

   int start=0;
   int end=size-1;
 int mid=start+(end-start)/2;
 int ans=-1;

  while(start<=end){
  if(brr[mid]==key) {
    ans=mid;
    start=mid+1;  
  }
  // if arr[mid]!=key let's findout the path
     else if(key>brr[mid]){
        start=mid+1;
      }
        else{
            end=mid-1;
        }
       mid=start+(end-start)/2;  //update mid for new midline.

  }
return ans;

}

int main(){

 int arr[7]={1,3,5,5,5,6,6};


 cout<< "Total occurence of 5 is:"<<(last(arr,7,5)-first(arr,7,5))+1<<endl;

    return 0;
}