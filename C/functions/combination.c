#include<stdio.h>


int main(){

    int n;
    printf("enter n");
    scanf("%d",&n);

    int r;
    printf("enter r ");
    scanf("%d",&r);

    int x=1;
    int y=1;
    int z=1;
for(int i=1;i<=n;i++){
    x=x*i;
}
for(int i=1;i<=r;i++){
    y=y*i;
}
for(int i=1;i<=n-r;i++){
    z=z*i;
}

int nCr=x/(y*z);

printf("the combination %d",nCr);
return 0;

}


