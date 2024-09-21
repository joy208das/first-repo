//find the 2nd maximum value out of all the elements in the array


#include <stdio.h>

int main() {
    int arr[] = {9, 1, 2, 3, 4, 5, 10, 7,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int secondMax = arr[0] > arr[1] ? arr[1] : arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    printf("Second maximum value: %d\n", secondMax);

    return 0;
}
