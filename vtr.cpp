#include "iostream"
#include "vector"
using namespace std;
int main() {
    vector<int> a;
    for (int i=0; i<5; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }

    a.insert(a.begin(), 100);
    // begin: first element;
    // insert(position, value);

    for (int x: a) {
        cout << x << endl;
    }
}