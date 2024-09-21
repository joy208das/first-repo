/*array in stl(standard template library)*/

#include<iostream>
#include<array>             //in stl array we need a array library function
using namespace std;
int main(){

array<int,5> joy={1,2,4,3,5};  //declare an array like this

int size= joy.size();  

for(int i=0;i<size;i++){
    cout<<joy[i]<<" ";
}cout<<endl;

cout<<"Element at 3rd index: "<<joy.at(3)<<endl;
cout<<"Empty or not : "<<joy.empty()<<endl;     //if array is empty output will be 1,if array is not empty then return 0

cout<<"1st element: "<<joy.front()<<endl;
cout<<"last element: "<<joy.back()<<endl;



}