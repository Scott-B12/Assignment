#include <stdio.h>
#include <string.h>

#define MAX 5  // Maximum number of records

// Define the Person structure
typedef struct {
    int id;
    int age;
    char name[50];
} Person;

void printArray(Person persons[], int size);
void sortArrayByAge(Person persons[], int size);

int main() {
    // Initialize an array of Person records
    Person persons[MAX] = {
        {1, 25, "Alice"},
        {2, 30, "Bob"},
        {3, 22, "Charlie"},
        {4, 28, "David"},
        {5, 35, "Eve"}
    };

    printf("Original array:\n");
    printArray(persons, MAX);

    // Sort the array by the age field
    sortArrayByAge(persons, MAX);

    printf("\nSorted array by age:\n");
    printArray(persons, MAX);

    return 0;
}

// Function to print the array of records
void printArray(Person persons[], int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Age: %d, Name: %s\n", persons[i].id, persons[i].age, persons[i].name);
    }
}

// Function to sort the array by the age field
void sortArrayByAge(Person persons[], int size) {
    Person temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (persons[j].age > persons[j + 1].age) {
                // Swap persons[j] and persons[j + 1]
                temp = persons[j];
                persons[j] = persons[j + 1];
                persons[j + 1] = temp;
            }
        }
    }
}
