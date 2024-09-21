/*VECTOR (STL)*/
#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> a;         //vector inisialization 
//we can store the size also {vector<int> a(10);}- like this
/*now this position a vector is empty,
 when we store any element in this vector ,it will
  increase it's size autometically  */

a.push_back(2);   // now the size of vector is 1;capacity is 1

a.push_back(25);  //now the size of vector is 2;capacity is 2

cout<<"size:"<<a.size()<<endl;
cout<<"capacity :"<<a.capacity()<<endl;

a.push_back(12);  //now the size of vector is 3;capacity is 4  (capacity increases in 2X order)
cout<<"size:"<<a.size()<<endl;
cout<<"capacity :"<<a.capacity()<<endl;

//now this vector is : 2,25,12

cout<<"element at index 2:"<<a[2]<<endl;  

cout<<"element at index 1:"<<a.at(1)<<endl;        //also do like this 

//1st and last element :
cout<<"1st element :"<<a.front()<<endl;
cout<<"last element :"<<a.back()<<endl;



return 0;
}

/*we can also inisialise like this
vector<int>a={1,2,4,5};
*/