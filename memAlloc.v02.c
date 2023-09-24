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

/*
 *The modified version of the program that takes a pointer to a pointer as an argument for the `getName` function is a more flexible and cleaner way to handle memory allocation for the name. It allows you to allocate memory in the `main` function and pass it to the `getName` function, which makes it easier to manage memory and separate concerns.

This approach is considered better because it encapsulates the memory management within the `getName` function, making it more modular and easier to reuse in other parts of your program. It also reduces the chance of memory leaks since you allocate and free the memory in the same scope.

Additionally, it adheres to the principle of "single responsibility," where each function has a specific task, making the code more readable and maintainable.

So, yes, the modified instance is a more logical and better way to write the program, especially if you intend to expand the functionality or use the `getName` function in other parts of your code.
*/
