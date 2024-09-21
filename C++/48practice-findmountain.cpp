/*peak mountain element
example:  2 3 4 3 2 1
mountain element is 4.

          4
          .               ------this point is mountain point.
      3 .   .3
    2 .       .2
                .1



*/

#include<iostream>

using namespace std;

int mount(int arr[],int n){
int s=0;
int e=n-1;
int m=s+(e-s)/2;

while(s<e){
 if(arr[m]<arr[m+1]){
   s=m+1;
 }
 else{
  e=m;
 }
m=s+(e-s)/2;
}
return s;
}

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
  cin>>arr[i];
}

cout<<"the Index of mountain point:"<<mount(arr,n);

return 0;
}