#include<stdio.h>

struct joy{

int age;
float income;
char dept[50];

};


int main(){


struct joy Joy;

printf("Enter age:");
scanf("%d",&Joy.age);
printf("Enter income:");
scanf("%f",&Joy.income);
printf("Enter the name of dept.:");
scanf("%s",&Joy.dept);
return 0;
}
