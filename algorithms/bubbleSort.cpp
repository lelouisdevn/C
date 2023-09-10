#include "iostream"
using namespace std;

int main() {
    int a[] = {4, 7, 8, 3, 10, 6, 4, 2};
    int len = sizeof(a) / sizeof(*a);

    for (int i=len-1; i>0; i--) {
        for (int j=0; j<i; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for (int i=0; i<len; i++) {
        cout << a[i] << " ";
    }
}