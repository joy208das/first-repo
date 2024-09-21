/*find square root(more precision like 6.082) of a number using binary search*/

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

double moreP(int n,int precision,int temp){

double factor=1;
double ans=temp;
for(int i=0;i<precision ;i++){
   factor=factor/10;
   for(double j=ans;j*j<n;j=j+factor){
    ans=j;
   }
}
return ans;
}

int main(){

  long long int n;
  cout<<"enter  num:";
  cin>>n;
 int temp=binaryS(n);
  cout<<"the ans is:"<<moreP(n,3,temp)<<endl;


    return 0;
}