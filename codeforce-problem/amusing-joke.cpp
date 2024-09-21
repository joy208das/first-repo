#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
   string a;
   string b;
   string c;

getline(cin,a);
getline(cin,b);
getline(cin,c);


sort(a.begin(),a.end());
sort(b.begin(),b.end());
sort(c.begin(),c.end());
string x=a+b;
sort(x.begin(),x.end());
if(x==c) cout<<"YES";
else cout<<"NO";

}
