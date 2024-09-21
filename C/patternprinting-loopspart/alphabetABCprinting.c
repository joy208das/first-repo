#include<stdio.h>

int main()
{
  int n;
 printf("enter of n");
 scanf("%d",&n);
int a=1+96;  //A-65 B-66...a-97 b-98

for(int i=1;i<=n;i++)
{
    char ch=(char)a;
    printf("%c ",ch);
    a++;
}

    return 0;
}
