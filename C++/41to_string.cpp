/*use of to_string*/
 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

  int  a=123452;
  string s=to_string(a);

  reverse(s.begin(), s.end());

   cout<<s<<endl;


    return 0;
}