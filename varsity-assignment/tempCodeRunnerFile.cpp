/*bubble sort
descending order*/

#include<iostream>
using namespace std;

void bubble(int arr[],int n){

for(int i=1;i<n;i++){
for(int j=0;j<n-i;j++){
    if(arr[j+1]>arr[j]){  // just change >
    int temp = arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;}
}

}
}

int main(){
int n;
cout<<"enter array size: ";
cin>>n;

int arr[n];
cout<<"input elements:"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

bubble(arr,n);

for(int i=0;i<n;i++){
 
cout<<arr[i]<<" ";

}

    return 0;
}