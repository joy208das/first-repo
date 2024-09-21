#include<iostream>
#include<string>

using namespace std;

int main(){
    int y;
    cin>>y;
getchar();
   string a;
   getline(cin,a);

 int n=a.size();

 if(y==n){
for(int i=0;i<n;i++){
    a[i]=tolower(a[i]);
 }

int x=0;
 if(a.size()==26) cout<<"YES";
 else cout<<"NO";
 }

else cout<<"NO";

    return 0;
}