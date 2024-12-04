#include <iostream>

using namespace std;

int main() {
    int n, pre1, pre2, x, y, z, max_diff = 0;
    bool upper, flag;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cin >> x;
            pre1 = x;
        } else if (i == 1) {
            cin >> y;
            pre2 = y;
        } else if (i == 2) {
            cin >> z;
            pre2 = z;

            flag = (x <= y && y <= z) || (x >= y && y >= z);
            if (flag)
                upper = x <= y && y <= z;
            else
                pre1 = y;
        } else {
            x = y;
            y = z;
            cin >> z;

            pre2 = z;
            if (!(flag && (
                    (x <= y && y <= z) || (x >= y && y >= z)
            ) && upper == (x <= y && y <= z))) {
                flag = (x <= y && y <= z) || (x >= y && y >= z);
                if (flag) {
                    pre1 = x;
                    upper = x <= y && y <= z;
                } else
                    pre1 = y;
            }
        }

        if (i > 0 && abs(pre1 - pre2) > max_diff)
            max_diff = abs(pre1 - pre2);
    }

    cout << max_diff;

    return 0;
}