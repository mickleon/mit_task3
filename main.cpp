#include <iostream>

using namespace std;

void fib(int n) {
    if (n >= 1) cout << 0 << endl;
    if (n >= 2) cout << 1 << endl;
    if (n > 2) {
        int v1 = 0, v2 = 1, v3;
        for (int i = 3; i <= n; i++) {
            v3 = v1 + v2;
            cout << v3 << endl;
            v1 = v2;
            v2 = v3;
        }
    }
}

int main() {
    int n;
    cin >> n;
    fib(n);
}