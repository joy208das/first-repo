#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s="Timur";
 
int i=0;
int sum=0;
while(s[i]!='\0'){
     sum=sum+int(s[i]);
    i++;
}
 
 
long long int t;
int a;
scanf("%lld",&t);
 
for(long long int i=0;i<t;i++){
cin>>a;
char m[a];
scanf("%s",m);
if(a!=5){ cout<<"NO"<<endl;}
else{
int j=0,dum=0;
while(m[j]!='\0'){
dum=dum+int(m[j]);
j++;
}
if(sum==dum) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
 
 
return 0;
}