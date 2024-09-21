/*pushback-popback*/
 
#include<iostream>
using namespace std;
int main(){

  string a="JOY Das";
  a.push_back('f');    //new akti character a string ar piche niye jabe
   cout<< a<<endl;

 a.pop_back();     //string ar last character soriye dey
 cout<< a<<endl;  
 a.pop_back();    
 cout<< a<<endl;

    return 0;
}