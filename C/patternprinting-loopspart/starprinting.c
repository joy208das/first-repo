#include<stdio.h>

int main()
{
 int n,m;
 printf("enter n");
 scanf("%d",&n);

 printf("enter m");
 scanf("%d",&m);

//****....upto n number of stars
for(int i =1;i<=m;i++){   //-for number of raw
 for(int i=1;i<=n;i++)         //-for coloum
{
    printf("* ");
}
printf("\n");     // proti line a enter marar jonno
}
    return 0;
}