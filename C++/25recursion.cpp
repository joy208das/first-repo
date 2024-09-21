/*recurison
print 1-n*/

#include<iostream>
using namespace std;

void swap(int n){
  if(n==0) return ;

  swap(n-1);
  cout<<n<<endl;
return;
}
int main(){
  int n;
  cin>>n;
  swap(n);

    return 0;
}