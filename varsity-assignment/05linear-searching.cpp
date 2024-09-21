#include<iostream>
using namespace std;

int main(){

int n;
cout<<"enter size of array: ";
cin>>n;
int arr[n];
cout<<"input elements: "<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cout<<"enter target element: ";
cin>>target;

for (int i=0;i<n;i++){

if (arr[i]==target){
    cout<<"target element at index: "<<i+1;
}
else{
    cout<<"invalid searching";
}
}

}