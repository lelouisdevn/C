#include "iostream"
using namespace std;

int main() {
    int a[] = {4, 7, 8, 3, 10, 6, 4, 2};
    for (int i=7; i>=0; i--) {
        int max = 0;
        for (int j=0; j<=i; j++) {
            if (a[j] > a[max]) {
                max = j;
            }
        }
        int temp = a[i];
        a[i] = a[max];
        a[max] = temp;
    }

    for (int i=0; i<=7; i++) {
        cout << a[i] << " ";
    }
}