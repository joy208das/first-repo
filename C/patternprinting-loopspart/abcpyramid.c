#include<stdio.h>

int main()
{
  int n;
 printf("enter of n");
 scanf("%d",&n);



for(int i =1;i<=n;i++){    
   int a=1+64; 
for(int j=1;j<=n-i;j++){
    printf(" ");
}
   
    for(int j=1; j<=2*i-1;j++){
char ch= (char)a;
        printf("%c",ch);
        a++;
    }

printf("\n");     
}
    return 0;
}