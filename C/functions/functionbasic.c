#include<stdio.h>

void bangladesh(){
 printf("you are in bangladesh\n ");

return;
}

void india(){
 printf("you are in india \n");
 bangladesh();
 return;
}

void england(){
printf("you are in England \n");
india();
return;
}


int main(){

 england();

return 0;
}