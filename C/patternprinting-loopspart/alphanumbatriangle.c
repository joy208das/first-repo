#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
                int a=1+64;
            for (int j = 1; j <= i; j++) {
                char ch = (char)a;
                printf("%c ", ch);
             a++;
            }
        }
        printf("\n");
    }

    return 0;
}
