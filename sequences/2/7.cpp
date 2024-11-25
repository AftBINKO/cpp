#include <iostream>

using namespace std;

int main() {
    int n, pred, cur, count = 0, max_count = count;
    cin >> n;

    for (int i = 0; i < n; i++) {
        pred = cur;
        cin >> cur;

        if (i >= 1 && pred < cur)
            count++;
        else
            count = 1;
        if (count > max_count)
            max_count = count;
    }

    cout << max_count;

    return 0;
}