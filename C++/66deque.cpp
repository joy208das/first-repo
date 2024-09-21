/*deque*/

#include<iostream>
#include<deque>

using namespace std;
int main(){
  
  deque<int>a;
 
 a.push_back(2);
a.push_back(3);

for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}

// other function work same as vector

    return 0;
}