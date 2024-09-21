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

    int r;
    printf("enter r ");
    scanf("%d",&r);

   int nCr= combination(n,r);

printf("the combination %d",nCr);
return 0;

}


