#include <iostream>

int fib(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    return fib(n - 2) + fib(n - 1);
}

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
}