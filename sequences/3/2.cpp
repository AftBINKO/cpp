#include <iostream>

using namespace std;

int main() {
    int n, pre, a, count = 1, max_count = count;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 0)
            cin >> pre;
        else {
            pre = a;
            cin >> a;

            if (pre == a)
                count++;
            else
                count = 1;

            if (count > max_count)
                max_count = count;
        }
    }

    cout << max_count;

    return 0;
}