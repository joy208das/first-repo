#include<stdio.h>

struct file {
    int age;
    int income;
    char name[50];

};

int main() {

   struct file person[3];

   for(int i=0;i<3;i++){
    printf("Information for person:%d\n",i+1);
    printf("Name:");
    scanf("%s",&person[i].name);
    printf("Age:");
    scanf("%d",&person[i].age);
    printf("Income:");
    scanf("%d",&person[i].income);

   }

printf("\n\n");
    for(int i=0;i<3;i++){
  printf("Person%d's Name:%s\n",i+1,person[i].name);
    printf("Person%d's Age:%d\n",i+1,person[i].age);
  printf("Person%d's Income:%d\n",i+1,person[i].income);

   }

    return 0;
}
