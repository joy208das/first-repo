#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    sort(begin(arr),end(arr));

    int n=arr[1]-arr[0];
    int m=arr[2]-arr[1];

    cout<<m+n;



    return 0;
}