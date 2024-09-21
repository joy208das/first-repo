/*find vowels*/
 
#include<iostream>
using namespace std;
int main(){

  string a="JOY Das";
   cout<< a<<endl;
     int count=0;

     for(int i=0;a[i]!=0;i++){
        int n=1;
        if(a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U' || a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' )
        {count++;
         cout<<"vowel is:"<<a[i]<<endl;
         
        }
       
     } 
cout<<"number of vowels:"<<count;


    return 0;
}