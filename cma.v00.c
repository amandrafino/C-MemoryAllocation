#include <stdio.h>
#include <stdlib.h>

void getName() {
    char* name = NULL;
    size_t size = 0;

    printf("Enter your first and last name: ");
    getline(&name, &size, stdin);

    printf("User's name: %s\n", name);

    free(name);
}

int main(void) {
    getName();
    return 0;
}
