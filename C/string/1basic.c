/*Declaration,print*/

#include<stdio.h>
int main(){
   
char ch[]={'J','o','Y','\0'};
printf("%s\n",ch);
/*also can declare like this

char ch[]="JOY";
*/
char bh[]="JOy DAS \nami gandu";
printf("%s\n",bh);


    return 0;
} 

/*
char ch[]={'J','o','Y','\0'};
akane nul character use korter hoyevhe
at ana korle JoY# arokom kisu dekabe ja garbage vlaue

ar ch[] akane size 4 dewa jete pare
JOY nam ar size 3 ,kintu 3 dile tate garbage value dekabe tai 4 dite 
hobe 
*/