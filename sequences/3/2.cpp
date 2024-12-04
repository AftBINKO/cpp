#include <iostream>

using namespace std;

int main() {
    int n, pre, a, count = 0, max_count = count;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cin >> pre;
            if (pre == 0) count++;
        } else {
            if (i > 1) pre = a;
            cin >> a;

            if (pre == a && a == 0) count++;
            else if (a == 0) count = 1;
            else count = 0;
        }
        if (count > max_count) max_count = count;
    }

    cout << max_count;

    return 0;
}