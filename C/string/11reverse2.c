/*reverse string without using strrev*/

#include<stdio.h>
int main(){
char sl[]="JOY DAS";
char cl[50];

int len=0,i=0,j;
while(sl[i]!='\0'){

 len++;
     i++;
}

for(int i=len-1,j=0;i>=0;i--,j++){
    cl[j]=sl[i];
}
cl[j]='\0';


printf("%s\n",cl);


    return 0;
}

