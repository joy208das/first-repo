/*string length without strln*/
#include<stdio.h>
int main(){

char sl[]="JOY";
int len=0;
for(int i=0;i<sizeof(sl)/sizeof(sl[0]);i++){
    len++;
}

printf("%d",len);


    return 0;
}
