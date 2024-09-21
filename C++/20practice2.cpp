/*to print reverse of a given number*/

#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;



while(n!=0){
int a=n%10;
n=n/10;
cout<<a;
}



return 0;
} 
