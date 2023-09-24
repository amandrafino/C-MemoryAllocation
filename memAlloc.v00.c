#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char* name = NULL;
    size_t size = 0;

    printf("Please enter your full name: ");
    getline(&name, &size, stdin);

    printf("Name: %s", name);

    free(name); // Free allocated memory

    return 0;
}

