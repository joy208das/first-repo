/*input a string of even length and 
reverse the first half of the string*/
 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

  string a="JOY Das";

  reverse(a.begin(),a.begin()+3);

   cout<<a<<endl;


    return 0;
}