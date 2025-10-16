//34. Write a program to rotate an array to the left by K positions.

#include <stdio.h>
#define MAX 100
void rotateLeft(int arr[], int n, int k) {
    int temp[MAX];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    int arr[MAX], n, k, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &k);
    k = k % n; // Handle cases where k >= n

    rotateLeft(arr, n, k);

    printf("Array after rotating left by %d positions:\n", k);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
