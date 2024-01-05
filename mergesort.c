#include<stdio.h>

void mergesort(int a[], int left, int right);
void merge(int a[], int left, int mid, int right);

int main() {
    int a[] = {2, 45, 0, 8, 56, 4, 4, 23, 1, 7};
    int size = sizeof(a) / sizeof(a[0]);  // Calculate the size of the array
    mergesort(a, 0, size - 1);  // Pass the correct array size
    printf("Sorted Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}

void mergesort(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  // Avoid potential overflow
        mergesort(a, left, mid);
        mergesort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

void merge(int a[], int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int leftArray[leftSize];
    int rightArray[rightSize];

    // Copy data to temporary arrays leftArray[] and rightArray[] in the same order
    for (int i = 0; i < leftSize; i++) {
        leftArray[i] = a[left + i];
    }
    for (int j = 0; j < rightSize; j++) {
        rightArray[j] = a[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    //merging parts
    while (i < leftSize && j < rightSize) {
        if (leftArray[i] <= rightArray[j]) {
            a[k] = leftArray[i];
            i++;
        } 
        else {
            a[k] = rightArray[j];
            j++;
        }
        k++;
    }
    // Copy the remaining elements of leftArray[], if there are any
    while (i < leftSize) {
        a[k] = leftArray[i];
        i++;
        k++;
    }
    // Copy the remaining elements of rightArray[], if there are any
    while (j < rightSize) {
        a[k] = rightArray[j];
        j++;
        k++;
    }
}
