#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int bin(string a,int n){
 int s=0;
 int e=n-1;
int mid=s+(e-s)/2;

 while(s<e){
    
  if(a[mid]<a[mid+1]){
    s=mid+1;
  }
  else e=mid-1;

mid=s+(e-s)/2;
 }

return s;

}


int main(){
    string s;
    getline(cin,s);

 int x=bin(s,s.length());

string result="";

for(int i=0;i<s.length();i++){
    if(s[i]==s[x])
    result=result+s[i];
}
cout<<result;

    return 0;
}

// ata hoy nai
// nicher ta hoyeche


// #include <iostream>
// #include <string>
// using namespace std;

// char findLargestChar(string a, int n) {
//     char largestChar = a[0];
//     for (int i = 1; i < n; ++i) {
//         if (a[i] > largestChar) {
//             largestChar = a[i];
//         }
//     }
//     return largestChar;
// }

// int main() {
//     string s;
//     getline(cin, s);

//     char largestChar = findLargestChar(s, s.length());

//     // Output all occurrences of the largest character
//     for (int i = 0; i < s.length(); ++i) {
//         if (s[i] == largestChar) {
//             cout << s[i];
//         }
//     }
//     cout << endl;

//     return 0;
// }
