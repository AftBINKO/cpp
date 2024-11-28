#include <iostream>

using namespace std;

int main() {
    int n, count = 0, t;
    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        t = i;
        while (t > 0) {
            t /= 10;
            count++;
        }
    }

    cout << count;

    return 0;
}