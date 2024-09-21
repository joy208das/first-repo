#include <stdio.h>


int min(int a,int b){
if(a<b) return a;
else return b;

}

int main() {
    int a, b;
    scanf("%d%d",&a,&b);
    int x=min(a,b);
    
    printf("%d",x);
    
    return 0;
    }