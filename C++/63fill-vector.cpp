/*fill vector*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int>a(10,5);       // this will print 5 for 10 times
 

for(int i=0;i<a.size();i++){
 cout<<a[i]<<endl;   
}


return 0;
}
/*
same thing we can do with fill library funciton 
fill(a.begin(),a.end(),5);
then print

this will also work same as well as.
*/