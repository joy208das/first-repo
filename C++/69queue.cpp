/*Queue*/

#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<string>a;

 a.push("Joy");
 a.push("Das");
 a.push("Diya");

 cout<<"first element: "<<a.front()<<endl;          //for print top element use a.front()

 a.pop();

 cout<<"first element: "<<a.front()<<endl;

 cout<<"size of this stack: "<<a.size()<<endl;

}