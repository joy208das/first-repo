#include<stdio.h>

int main()
{
  int n;
 printf("enter of n");
 scanf("%d",&n);


 int i,j;

if(i%2!=0){
   for(int i=1;i<=n;i++){
    
    for(int j=1;j<=i;j++){
        printf("%d",j);
        
   }     
    printf("\n");
    
}

}
   else {
 for(int i=1;i<=n;i++){
    int a=1+64;
    for(int j=1;j<=i;j++){

        char ch=(char)a;
        printf("%c",ch);
        
   }     
    printf("\n");
    
}

   }
    return 0;
}
