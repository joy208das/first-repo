/*insertion sorting*/

#include<iostream>
using namespace std;

void insertion(int arr[],int n){

for(int i=1;i<n;i++){
 int current = arr[i];
 int j=i-1;
 while (current<arr[j] && j>=0){
    arr[j+1]=arr[j];
    j--;
 }
arr[j+1]= current;
}

}

int main(){
int n;
cout<<"enter array size1: ";
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
insertion(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}