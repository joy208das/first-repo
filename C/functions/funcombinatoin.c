#include<stdio.h>

int factorial(int f){
int a=1;
    for(int i=1;i<=f;i++){
        a=a*i;
    }
    return a;
}
int main(){

    int n;
    printf("enter n");
    scanf("%d",&n);

    int r;
    printf("enter r ");
    scanf("%d",&r);

    int x= factorial(n);
    int y=factorial(r);
    int z=factorial(n-r);


int nCr=x/(y*z);

printf("the combination %d",nCr);
return 0;

}


