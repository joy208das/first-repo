#include<stdio.h>

int main()
{
  int n;
 printf("enter of n");
 scanf("%d",&n);

int nst=n;
int nsp=1;
int m=1;
for(int i=1;i<=2*n+1;i++){
    int x=m+64;
    char ch=(char)x;
    printf("%c",ch);
    m++;
}
printf("\n");

for(int i =1;i<=n;i++){   


    int a=1;

for(int j=1;j<=nst;j++){
    int y=a+64;
    char ch=(char)y;
    printf("%c",ch);
    a++;
}
 
    for(int j=1; j<=nsp;j++){
      printf(" ");
      a++;
    }
    for(int j=1;j<=nst;j++){
        int y=a+64;
    char ch=(char)y;
    printf("%c",ch);
    a++;
    }
 nst--;
 nsp+=2;
printf("\n");     
}
    return 0; 
}