/*priority queue*/

#include<iostream>
#include<queue>
using namespace std;
int main(){
 priority_queue<int>max;

priority_queue<int,vector<int>,greater<int>> min;      //for minimum set 

max.push(1);
max.push(11);
max.push(8);
max.push(2);
max.push(6);

int n=max.size();

for(int i=0;i<n;i++){
 cout<<max.top()<<" ";               /*protibar maximum number print korbe
                                        r max.pop() sei protom element bad dibe 
                                       ar porer 2nd maximum print korbe */ 
 max.pop();

}cout<<endl;

min.push(10);
min.push(11);
min.push(9);
min.push(12);
min.push(6);
int a=min.size();
for(int i=0;i<n;i++){
    cout<<min.top()<<" ";
    min.pop();
}cout<<endl;


    return 0;
}