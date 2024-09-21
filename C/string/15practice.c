/*vowel,consonant,digit,word =counting*/

#include<stdio.h>
int main(){

char sl[50],ch;
scanf("%[^\n]",&sl);
int vowel,consonant,word,digit,other;
int i=0;
vowel=consonant=word=digit=other=0;
while((ch=sl[i])!=0){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    vowel++;
    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    consonant++;
    else if(ch>='0' && ch<='9')
    digit++;
    else if(ch==' '){
    word++;}
    else
    other++;
    i++;
}
word++;

printf("vowel:%d\n",vowel);
printf("consonant:%d\n",consonant);
printf("word:%d\n",word);
printf("digit:%d\n",digit);
printf("other:%d\n",other);


    return 0;
}