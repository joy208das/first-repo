/*input: JOY 
output:
J
O
Y
*/

#include<stdio.h>
int main(){

char sl[]="JOY";
int i=0;
while(sl[i]!='\0'){  //loop ti nul character forjonto cholbe

printf("%c\n",sl[i]);
i++;

}


    return 0;
}
/*
loop size forjonto o run korle hobe
while(sl[i]!=sizeof(sl)/sizeof(sl[0]))

*/