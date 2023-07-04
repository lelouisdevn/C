#include "stdio.h"
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int *a, int i, int N) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < N && a[left] > a[largest]) {
        largest = left;
    }
    if (right < N && a[right] > a[largest]) {
        largest = right;
    }
    if (largest != i) {
        swap(a+i, a+largest);
        heapify(a, largest, N);
    }
}
int main() {
    int a[] = {4, 1, 6, 8, 2, 5, 3};
    int n = sizeof(a) / sizeof(*a);
    for (int i=(n-2)/2; i>=0; i--) {
        heapify(a, i, n);
    }
    for (int j=n-1; j>=0; j--) {
        swap(a+0, a+j);
        heapify(a, 0, j);
    }

    for (int i = 0; i<n; i++) {
        printf("%d ", *(a+i));
    }
}