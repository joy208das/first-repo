//given an array of marks of students if the mark of any student is less than 35,print its roll number.
//take 10 marks
// roll number here refers to the index of the array 
//example- int marks[5]={95,14,25,96,84} output-1,2 
#include<stdio.h>
int main(){

int marks[10]={95,90,65,36,25,26,27,95,97,58};

for(int i=0;i<10;i++){
if(marks[i]<35){
printf("%d\n",i);
}
}


    return 0;
}

