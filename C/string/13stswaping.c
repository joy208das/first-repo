/*string swaping*/
/*reverse string without using strrev*/

#include<stdio.h>
int main(){
char sl[]="JOY DAS";
char cl[50]="joy gandu";
char temp[50];

strcpy(temp,sl);
strcpy(sl,cl);
strcpy(cl,temp);

printf("%s\n",sl);

printf("%s\n",cl);

    return 0;
}

