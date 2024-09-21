
#include<stdio.h>

struct joy{

int age;
float income;
char dept[50];

};


int main(){


struct joy Joy;
struct joy tonu={15,0,"Science"};

printf("Enter age:");
scanf("%d",&Joy.age);
printf("Enter income:");
scanf("%f",&Joy.income);
printf("Enter the name of dept.:");
scanf("%s",&Joy.dept);

printf("For tona");
printf("\n");

printf("AGE:%d\n",tonu.age);
printf("INCOME:%.2f\n",tonu.income);
printf("DEPT:%s",tonu.dept);
return 0;
}
