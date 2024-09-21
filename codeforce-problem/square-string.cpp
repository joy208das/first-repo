#include<iostream>
using namespace std;
int main(){

int t;
cin>>t;
getchar();
 for(int i=1;i<=t;i++){

  string s;
   getline(cin,s);

   if((s.length())%2!=0){ cout<<"NO"<<endl;}

  else{
  string a="";
  string b="";
         for(int i=0;i<((s.length())/2);i++){
             a=a+s[i];
         }

         for(int j=s.length()/2;j<s.length();j++){
            b=b+s[j];
         }


          if(a==b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

  }

 }


    return 0;
}
