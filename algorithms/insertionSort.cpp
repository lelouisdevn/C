#include "iostream"
using namespace std;

int main() {
    int a[] = {10, 3, 5, 7, 9, 4, 2};
    int size = sizeof(a) / sizeof(*a);
    for (int i=1; i<size; i++) {
        int j = i;
        while(j > 0 && a[j] < a[j-1]) {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }

    for (int i=0; i<size; i++) {
        cout << a[i] << " ";
    }
}