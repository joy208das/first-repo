#include<stdio.h>

struct joy {
    int age;
    float income;
    char dept[50];
};

int main() {
    struct joy Joy;
    struct joy tonu = {15, 45454.0, "Science"};  // Correct initialization of the string

  Joy=tonu;

    printf("Age: %d\n", Joy.age);
    printf("Income: %.2f\n", Joy.income);  // Proper formatting for float
    printf("Dept: %s\n", Joy.dept);  // Proper formatting for string

    return 0;
}
