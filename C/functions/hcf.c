  #include<stdio.h>
  
int min(int a,int b){
    if(a<b) return b;
    else return a;
}
int gcd(int a, int b){
 int x;
    for(int i=1; i<=min(a,b);i++){
          if(a%i==0 && b%i==0){
            x=i;
          }
   }
return x;
}
  int main(){

int a;
printf("enter a");
scanf("%d",&a);
int b;
printf("enter b");
scanf("%d",&b);

int hcf= gcd(a,b);
printf(" The Hcf/Gcd of %d and %d is : %d",a,b,hcf);

return 0;


  }