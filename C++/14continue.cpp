#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter number:";
cin>>n;

for(int i=1;i<=n;i++){

if(i==10){
    continue;
}
cout<<i<<endl;
}

} 