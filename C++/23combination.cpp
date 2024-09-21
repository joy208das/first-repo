/*Combinaton*/

#include<iostream>
#include<cmath> 
using namespace std;

int main(){

int n,r;
cout<<"enter n";
cin>>n;
cout<<"enter r";
cin>>r;

int s=1;
for(int i=1;i<=n;i++){
s=s*i;
}
int m=1;
for(int i=1;i<=r;i++){
m=m*i;
}
int p=1;
for(int i=1;i<=n-r;i++){
p=p*i;
}
cout<<s/(m*p);
}