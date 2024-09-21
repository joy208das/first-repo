#include<stdio.h>

int factorial(int f){
int a=1;
    for(int i=1;i<=f;i++){
        a=a*i;
    }
    return a;
}
int combination(int n,int r){
int final=factorial(n)/(factorial(r)*factorial(n-r));

  return final;  
}
int main(){

    int n;
    printf("enter n");
    scanf("%d",&n);

 

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
int final=combination(i,j);
            printf("%d",final);
        }
           printf("\n");
    }

return 0;

}


