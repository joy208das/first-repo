//delete any element
#include<iostream>
using namespace std;


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
cout<<"enter target element index: ";
cin>>target;
  
for(int i=target;i<n-1;i++){
  
arr[i]=arr[i+1];
}
n--;
cout<<"after deleting target element:"<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}