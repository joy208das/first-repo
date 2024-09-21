#include<stdio.h>

int main()
{
  int n;
 printf("enter of n");
 scanf("%d",&n);


for(int i =1;i<=n;i++){    
    
for(int j=1;j<=n-i;j++){
    printf(" ");
}
 int y=1;

    for(int j=1; j<=i;j++){
       int b=y+64;
       char ch=(char)b;
        printf("%c",ch);
        y++;
    }
 
 int a=i-1;
 for(int j=1;j<=i-1;j++){
    int x=a+64;
    char ch=(char)x;
printf("%c",ch);
a--;
 }
printf("\n");     
}
    return 0;
}