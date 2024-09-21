/*if we put very large number that int can't
store that number then we need to change the mid formula*/

#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){

   int start=0;
   int end=size-1;
 int mid=start+(end-start)/2;
 
  while(start<=end){
  if(arr[mid]==key) {
    return mid;
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
return -1;

}

int main(){
 int even[6]={2,4,6,8,10,14};
 int odd[5]={3,5,25,30,65};

 int evenindex=binarySearch(even,6,10);
 cout<< "index of 10 is:"<<evenindex<<endl;

 int oddindex=binarySearch(odd,5,5);
 cout<< "index of 5 is:"<<oddindex<<endl; 


    return 0;
}