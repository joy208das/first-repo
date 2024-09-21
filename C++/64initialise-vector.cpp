/*Initialize*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>a={1,2,3,5};
  for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
  }cout<<endl;

  vector<int>b(a.begin(),a.end());  // we can also initialise like this

for(int i=0;i<b.size();i++){
    cout<<b[i]<<" ";
  }cout<<endl;



    return 0;
}