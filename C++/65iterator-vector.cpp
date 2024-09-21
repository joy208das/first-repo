/*vector iterator*/

#include<iostream>
#include<vector>
using namespace std;
int main(){

vector<int>a={1,2,3,4,5};
vector<int>:: iterator joy;

for(joy=a.begin();joy != a.end(); joy++){
    cout<<*joy<<" ";
}cout<<endl;

vector<int>::reverse_iterator diya;      //for reverse 

for(diya=a.rbegin();diya!=a.rend();diya++){
    cout<<*diya<<" ";
}cout<<endl;

//maxsize ,resize
vector<char>b={'a','e','i','o','u'};
cout<<"max size of this array:"<<b.max_size()<<endl;
b.resize(3);

for(int i=0;i<b.size();i++){
    cout<<b[i]<<" ";
}cout<<endl;

//reserve - increases the capacity 

b.reserve(100);
cout<<"The capacity :"<<b.capacity()<<endl;

//insertion = to add some elements 

vector<int>ab={2,5,3,6,89};
vector<int>::iterator jo;

jo=ab.begin()+2;   // we try to add some elements in index 2
ab.insert(jo,3,23);  // we add 23 23 23 from index 2
for(int i=0;i<ab.size();i++){
    cout<<ab[i]<<" ";
}cout<<endl;

//erase elements

ab.erase(ab.begin()+6,ab.begin()+8);
for(int i=0;i<ab.size();i++){
    cout<<ab[i]<<" ";
}

return 0;
}