#include <iostream>

using namespace std;

int main() {
    int n, a, count = 0, max_count = count;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 0) count++;
        else count = 0;

        if (count > max_count) max_count = count;
    }

    cout << max_count;

    return 0;
}