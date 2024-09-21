/*find 2nd max*/

#include<iostream>

using namespace std;

int main(){

int arr[5]={25,26,36,78,79};

int max=arr[0];
for(int i=0;i<5;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
cout<<max<<endl;
int m2=arr[0];
for(int i=0;i<5;i++){
    if(arr[i]!=max){
    if(m2<arr[i]){
        m2=arr[i];
    }}
}
cout<<m2;
return 0;
} 