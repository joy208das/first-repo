/*factorial using recursion */

#include<iostream>
using namespace std;

int swap(int n){
  if(n==0 || n==1) return 1;

 return n*swap(n-1);
 

}
int main(){
  int n;
  cin>>n;
 cout<< swap(n);

    return 0;
}