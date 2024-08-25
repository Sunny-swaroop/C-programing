#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Declare a pointer to the structure
    struct Person *ptr;

    // Dynamically allocate memory for one structure of type Person
    ptr = (struct Person*) malloc(sizeof(struct Person));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values to the fields of the structure
    strcpy(ptr->name, "sunny");
    ptr->age = 26;
    ptr->height = 6.0;

    // Print the values stored in the structure
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Height: %.1f\n", ptr->height);

    // Free the allocated memory
    free(ptr);

    return 0;
}

