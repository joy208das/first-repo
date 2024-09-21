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

        printf("%d",j);
    }
 nst++;
 int a=i-1;
 for(int j=1;j<=i-1;j++){
printf("%d",a);
a--;
 }
printf("\n");     
}
    return 0;
}