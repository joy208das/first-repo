#include<stdio.h>

struct person{
int age;
float salary;
int arr[];
};
int main()
{
 struct person person1,person2;

 person1.age=24;
 person1.salary=12000.00;

  person2.age=15;
 person2.salary=200000.00;

 printf("Age:%d\n",person1.age);
 printf("TK:%.3f\n",person1.salary);

  printf("Age:%d\n",person2.age);
  printf("Salary:%.2f",person2.salary);



    return 0;
}
