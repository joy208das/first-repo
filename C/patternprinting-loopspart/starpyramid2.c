#include<stdio.h>

int main()
{
  int n;
 printf("enter of n");
 scanf("%d",&n);

int nst=1;

for(int i =1;i<=n;i++){    
    int nsp= n-i;
for(int j=1;j<=nsp;j++){
    printf(" ");
}
 nsp--;
    for(int j=1; j<=nst;j++){

        printf("*");
    }
 nst=nst+2;
printf("\n");     
}
    return 0;
}