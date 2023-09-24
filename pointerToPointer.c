#include <stdio.h>

int main() {
    int num = 42;
    int* ptr1 = &num; // Pointer to an integer
    int** ptr2 = &ptr1; // Pointer to a pointer to an integer

    // Double indirection to get the value of num
    printf("Value of num: %d\n", **ptr2);

    return 0;
}
