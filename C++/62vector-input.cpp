/*vector input*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cout<<"enter size of vector:";
cin>>n;

vector<int>a;

int value;
//input vector
for(int i=0;i<n;i++){
 cout<<"enter values:";   
cin>>value;
a.push_back(value);

}

for(int i=0;i<n;i++){

cout<<a[i]<<" ";
}cout<<endl;

cout<<"size:"<<a.size()<<endl;
cout<<"capacity:"<<a.capacity();

}