
#include <stdio.h>

int minTerm(int arr[], int size) {
    int min = arr[0];  // Assume the first element is the minimum

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Update min if a smaller element is found
        }
    }
    return min;  // Reuurn the smallest value
}