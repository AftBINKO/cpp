#include <iostream>

using namespace std;

int main() {
    int n, pre1, pre2, tmp, max_diff = 0, j;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (j == 0)
            cin >> pre1;
        else if (j == 1)
            cin >> pre2;
        else {
            cin >> tmp;
            if (tmp > pre2)
                pre2 = tmp;
            else {
                pre1 = tmp;
                j = 0;
            }
        }

        if (j > 0 && (pre2 - pre1) > max_diff) max_diff = pre2 - pre1;

        j++;
    }

    cout << max_diff;

    return 0;
}