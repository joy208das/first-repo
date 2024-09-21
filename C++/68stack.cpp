/*stack*/

#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<string>a;

 a.push("Joy Das");
 a.push("Das");
 a.push("Diya");

 cout<<"first element: "<<a.top()<<endl;          //for print top element use a.top()

 a.pop();

 cout<<"first element: "<<a.top()<<endl;

 cout<<"size of this stack: "<<a.size()<<endl;

}
/*serially 3 ta boi jodi aktar upor akta raki
jokon boi gulo abr serillay uthano suru korbo 
sobar upor jeta thakbe seta utbe
sobar last a jeta raka hobe setai protom a utbe ,ar por serially utte thakbe*/