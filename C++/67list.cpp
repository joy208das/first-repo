/*list
The std::list container doesn't support direct
 indexing like arrays or std::vector.
 like this-
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";               
}    -- this will not work
 Instead, you should use an iterator to traverse the list. 
 or range based for loop.

*/

#include<iostream>
#include<list>

using namespace std;

int main(){
  
  list<int>a;
 
 a.push_back(2);
a.push_back(3);


for(int i:a){
    cout<<i<<" ";        // if we use for(auto i:a) this will automatically initialise the data-type.
}


    return 0;
}