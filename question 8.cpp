#include <stdio.h>

// Function to merge two arrays in descending order
void mergeArrays(int arr1[], int arr2[], int merged[], int size) {
    int i = 0, j = 0, k = 0;
    
    // Merge the two arrays into the merged array
    while (i < size && j < size) {
        if (arr1[i] > arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1
    while (i < size) {
        merged[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2
    while (j < size) {
        merged[k++] = arr2[j++];
    }
}

// Function to count the frequency of duplicate numbers in the merged array
void countDuplicates(int merged[], int size) {
    int count;
    
    // Loop through the merged array to count duplicates
    printf("\nDuplicate Numbers and Their Frequencies:\n");
    for (int i = 0; i < size; i++) {
        count = 1;
        if (merged[i] != -1) {  // Check if the number has already been processed
            for (int j = i + 1; j < size; j++) {
                if (merged[i] == merged[j]) {
                    count++;
                    merged[j] = -1;  // Mark the number as processed
                }
            }
            if (count > 1) {
                printf("Number: %d, Frequency: %d\n", merged[i], count);
            }
        }
    }
}

int main() {
    int size;
    
    // Get the size of the arrays (both arrays are the same size)
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], merged[2 * size];

    // Input the elements of the first array (in descending order)
    printf("\nEnter elements of the first array (sorted in descending order):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the elements of the second array (in descending order)
    printf("\nEnter elements of the second array (sorted in descending order):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the arrays
    mergeArrays(arr1, arr2, merged, size);

    // Print the merged array
    printf("\nMerged Array in Descending Order:\n");
    for (int i = 0; i < 2 * size; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    // Count and print duplicates
    countDuplicates(merged, 2 * size);

    return 0;
}

