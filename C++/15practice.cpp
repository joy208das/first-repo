/*display this GP-1 2 4 8 16 32 ...*/

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"enter round:";
cin>>n;
int a=1;
for(int i=1;i<=n;i++){
if(i>=1)
cout<<a<<" ";
a*=2;
}

return 0;
} 