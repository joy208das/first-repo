//delete 1st element
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
  cout<<"after deleting 1st element:"<<endl;
for(int i=1;i<n;i++){
  
    cout<<arr[i]<<" ";
}



return 0;
}