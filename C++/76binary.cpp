#include<iostream>
using namespace std;

int binary(int arr[],int size,int key){

   int start=0;
   int end=size-1;
 int mid=(start+end)/2;
 
  while(start<=end){
  if(arr[mid]==key) {
    return mid;
  }
 
      if(key>arr[mid]){
        start=mid+1;
      }
        else{
            end=mid-1;
        }
       mid=(start+end)/2;   

  }
return -1;

}

int main(){

  int n;
    cout<<"enter size: ";
    cin>>n;
int arr[n];
cout<<"enter elements:"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
int target;
cout<<"enter target element: ";
cin>>target;
int x = binary(arr,n,target);

if(x==-1){
    cout<<"error"<<endl;
}
else {
    cout<<"target element at power:"<<x+1<<endl;
}


    return 0;
}