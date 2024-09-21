/*bubble sort*/
#include<iostream>
using namespace std;

int bubbleSort(int arr[],int n){

 for(int i=1;i<n;i++){//for round 1 to n-1
bool swapped=false;   //for ignore the swapping  in best cases     

  for(int j=0;j<n-i;j++){ //for swap
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
         swapped=true;
    }
  }  
  if(swapped==false){
    break;
  }

 }


}
int main(){
    
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    
     cin>>arr[i];

  }

bubbleSort(arr,n);
    
    for(int i=0;i<n;i++){
    
     cout<<arr[i]<<" ";

  }


    return 0;
}