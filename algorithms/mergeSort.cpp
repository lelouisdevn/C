#include "iostream"
using namespace std;

void merge(int *a, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1];
    int R[n2];

    for (int i=0; i<n1; i++) {
        L[i] = a[left+i];
    }
    for (int j=0; j<n2; j++) {
        R[j] = a[mid + 1 + j];
    }

    int i, j; i = j = 0;
    int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i<n1) {
        a[k] = L[i];
        i++; k++;
    }
    while (j<n2) {
        a[k] = R[j];
        j++; k++;
    }
}

void mergeSort(int *a, int left, int right) {
    if (left < right) {
        int mid = left + (right - left)/2;
        mergeSort(a, left, mid);
        mergeSort(a, mid+1, right);

        merge(a, left, mid, right);
    }
}

int main() {
    int a[] = {4, 7, 8, 3, 10, 6, 4, 2, 11, 1, 7, 5};
    mergeSort(a, 0, 12);

    for (int i=0; i<12; i++) {
        cout << a[i] << endl;
    }
}