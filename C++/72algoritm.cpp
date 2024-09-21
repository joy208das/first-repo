/*algoritm 
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int>a;
a.push_back(2);
a.push_back(3);
a.push_back(1);
a.push_back(9);
a.push_back(6);

cout<<"Finding 6: "<<binary_search(a.begin(),a.end(),6)<<endl;

//upper bound ,lower bound
vector<int>b={1, 2, 2, 2, 3, 4, 5};
cout<<"lower bound2:"<<lower_bound(b.begin(),b.end(),2)-b.begin()<<endl;

cout<<"upper bound of 2:"<<upper_bound(b.begin(),b.end(),2)-b.begin()<<endl;

//sorting
vector<int>x={1, 10, 2, 9, 3, 4, 5};
sort(begin(x),end(x));
for(int i:x){
    cout<<i<<" ";
}

  
    return 0;
}

/*Lower Bound:

The lower_bound function returns an iterator to the first element that is not less than 2.
In this case, it will point to the first occurrence of 2.
Output: Lower bound of 2 is at index 1 with value 2.
Upper Bound:

The upper_bound function returns an iterator to the first element that is greater than 2. 
In this case, it will point to the element 3.
Output: Upper bound of 2 is at index 4 with value 3.*/