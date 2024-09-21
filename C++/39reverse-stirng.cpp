/*reverse a string*/
 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

  string a="JOY Das";
  
  reverse(a.begin(),a.end());

   cout<<a<<endl;


    return 0;
}