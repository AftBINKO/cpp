#include <iostream>

using namespace std;

int main() {
    int n, fib1 = 0, fib2 = 1;
    cin >> n;

    switch (n) {
        case 0:
            cout << fib1 << endl;
            break;
        case 1:
            cout << fib2 << endl;
            break;
        default:
            while (fib2 < n) {
                int fib = fib2 + fib1;
                fib1 = fib2;
                fib2 = fib;
            }
            if (n == fib2)
                cout << fib2 << endl;
            else
                cout << fib1 << endl;
            break;
    }

    return 0;
}
