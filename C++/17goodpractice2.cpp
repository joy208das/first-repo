/*to print the sum of all digit in given number*/
/*Way-01*/
#include<iostream>

using namespace std;

int main(){
int n;
cin>>n;

int sum=0;

while(n!=0){
int a=n%10;
n=n/10;
sum=sum+a;
}

cout<<sum<<" ";

return 0;
} 
/*kunu number k 10 diye vag korle oi number ar last digit
vagses hisebe ashe.
tai sum+=a dewa hoyeche
r n=n/10 diye proti bar shesh ar akta digit komiye dilm */