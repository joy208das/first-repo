/*palindrom or not*/

#include <stdio.h>
#include <string.h>

int main() {
    char sl[50];
    scanf("%[^\n]",&sl);
    char cl[100];

    int len = 0, i = 0, j;
    while (sl[i] != '\0') {
        i++;
        len++;
    }

    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        cl[j] = sl[i];
    }
    cl[len] = '\0'; // Null-terminate cl[]

    int d = strcmp(sl, cl);

    if (d == 0) {
        printf("yes\n");
    }
     else {
        printf("no\n");
    }

    return 0;
}
