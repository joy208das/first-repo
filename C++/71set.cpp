/*set*
*/

#include<iostream>
#include<set>
using namespace std;

int main(){
  set<int>a;
  a.insert(1);
a.insert(3);
a.insert(3);
a.insert(5);
a.insert(3);
a.insert(6);
a.insert(6);
a.insert(6);
a.insert(5);

for(int i:a){
    cout<<i<<" ";
}cout<<endl;

a.erase(a.begin());

for(int i:a){
    cout<<i<<" ";
}cout<<endl;

//erase index 1 element

set<int>::iterator joy;
joy=a.begin();
joy++;

a.erase(joy);
for(int i:a){
    cout<<i<<" ";
}cout<<endl;
//find 5 or any element is present or not

cout<<"6 is present or not: "<<a.count(6)<<endl;   //if present then it will return 1


    return 0;
}