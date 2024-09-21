/*counting Small,capital letter and digit*/


#include<stdio.h>
int main(){

char sl[50];
scanf("%[^\n]",&sl);
int small,capital,digit;
small=capital=digit=0;
int i=0;

while(sl[i]!='\0'){
if(sl[i]>='a' && sl[i]<='z')
small++;
else if(sl[i]>='A' && sl[i]<='Z')
    capital ++;
else if(sl[i]>='0' && sl[i]<='9')
    digit++;
i++;
}
printf("small:%d\n",small);
printf("capital:%d\n",capital);
printf("digit:%d",digit);

    return 0;
}
