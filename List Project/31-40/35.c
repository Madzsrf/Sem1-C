//35. Write a program to find the frequency of each element in an array.

#include <stdio.h>
#define MAX 100
int main() {
    int arr[MAX], freq[MAX], n, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Calculate frequency of each element
    for (i = 0; i < n; i++) {
        if (freq[i] == -1) { // If not already counted
            int count = 1;
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0; // Mark as counted
                }
            }
            freq[i] = count; // Store frequency
        }
    }

    printf("Element\tFrequency\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) { // Print only if not marked
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
