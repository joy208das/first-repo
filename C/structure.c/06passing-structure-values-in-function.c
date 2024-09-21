#include<stdio.h>

struct person{
int age;
float salary;
};

void bang(struct person p){

 printf("Age:%d\n",p.age);
 printf("TK:%.3f\n",p.salary);

}

int main()
{
 struct person person1;

 person1.age=24;
 person1.salary=12000.00;

bang(person1);



    return 0;
}

