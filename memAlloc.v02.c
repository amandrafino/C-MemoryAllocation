#include <stdio.h>
#include <stdlib.h>

// Get user's first && last name
void getName(char** name) {
    size_t size = 0;

    printf("Please enter your first and last name: ");
    getline(name, &size, stdin);

}

int main(void) {
    char* name = NULL;
    getName(&name);

    printf("User's name: %s\n", name);

    return 0;
}


