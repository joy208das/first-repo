/*concatenation without using strcpy*/


#include<stdio.h>
int main(){

char sl[]="JOY ";
char cl[]="The gandu";
int len=0;
int i=0;
while(sl[i]!='\0'){
    i++;
    len++;
}
int j=0;
while(cl[j]!='\0'){

    sl[len+j]=cl[j];
}


printf("%s\n",sl);



    return 0;
}