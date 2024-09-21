/*arr[7]={1,3,5,5,5,6,9}
key=5
first most occurence in index 2
last most occurence in index 4

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

 cout<< "1st most occurence of 5 in Index:"<<first(arr,7,6)<<endl;
  cout<< "Lasr most occurence of 5 in Index:"<<last(arr,7,6)<<endl;



    return 0;
}