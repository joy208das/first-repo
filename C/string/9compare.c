/*comparing two strings*/

#include<stdio.h>
int main()
{
char sl[]="JOY";
char cl[]="JOY is Gandu";

int d= strcmp(sl,cl);

if(sl==0){
    printf("they are equal");
}
else {

    printf("they are not equal");
}

return 0;

}




