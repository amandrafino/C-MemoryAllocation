#include <stdio.h>
#include <stdlib.h>

// Get user's first & last name
void getName() {
    char* name = NULL;
    size_t size = 0;

    printf("Please enter your first and last name: ");
    getline(&name, &size, stdin);

    printf("User's name: %s\n", name);

    free(name);
}

int main(void) {
    getName();
    return 0;
}
