/*to print the sum of all digit in given number*/
//Way-02
#include<iostream>
#include<string.h>
using namespace std;

int main(){
char n[50];
cout<<"enter number:";
gets(n);


int sum=0;

for(int i=0;n[i]!='\0';i++){
sum+=n[i]-'0';  //Subtracted '0' from n[i] to convert the character to its corresponding numeric digit value.
}

cout<<sum<<" ";



return 0;
} 