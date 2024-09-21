/*Find the pivot point
arr[9]={5,6,7,8,5,4,3,2,1}

             8 
             .              
           7. .         
          6.   .      
         5.     .5  
                 .       .1
                  .     .2
                   .  .3                                   
                    .4           ----this is the pivot point 
                      
 */

#include<iostream>
using namespace std;

 int pivot(int arr[],int n){

  int s=0;
  int e=n-1;
  int mid=s+(e-s)/2;

  while(s<e){
      if(arr[mid]>=arr[0]){
        s=mid+1;
      }
     else {
        e=mid;
     }
     mid=s+(e-s)/2;
  }  
  return s;
 
 }

int main()
{

int arr[9]={5,6,7,8,5,4,3,2,1};

cout<<"The Index of pivot:"<<pivot(arr,9)<<endl;

    return 0;
}