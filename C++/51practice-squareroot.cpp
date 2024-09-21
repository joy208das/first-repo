/*find square root of a number using binary search*/
#include<iostream>
using namespace std;
long long int binaryS(long long int a){

 int s=0;
 int e=a;
long long int mid=s+(e-s)/2;
long long int ans=-1;
while(s<=e){
 long long int square=mid*mid;

if(square==a){
    return mid;
}
    else if(square<a){
        ans=mid;
     s=mid+1;}
    else {
        e=mid-1;
    }
mid=s+(e-s)/2;
}
return ans;

}
int main(){

  long long int n;
  cout<<"enter  num:";
  cin>>n;

  cout<<binaryS(n)<<endl;


    return 0;
}