#include <stdio.h>

// Function to insert a new value into the array
void insertValue(int arr[], int *size, int value) {
    arr[*size] = value;
    (*size)++;  // Increase the size of the array after insertion
}

// Function to sort the array in descending order
void sortDescending(int arr[], int size) {
    int temp;
    
    // Bubble sort to sort the array in descending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // Swap the elements if they are in the wrong order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    printf("Array after insertion and sorting (in descending order):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, value;

    // Get the initial size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the new value to insert into the array
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Insert the new value into the array
    insertValue(arr, &size, value);

    // Sort the array in descending order
    sortDescending(arr, size);

    // Print the sorted array
    printArray(arr, size);

    return 0;
}

