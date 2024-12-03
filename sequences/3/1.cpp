#include <iostream>

using namespace std;

int main() {
    int n, pre1, pre2, tmp, max_diff = 0, j;
    bool flag;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (j == 0)
            cin >> pre1;
        else if (j == 1) {
            cin >> pre2;
            flag = pre2 <= pre1;
        } else {
            cin >> tmp;
            if ((tmp > pre2 && !flag) || (tmp <= pre2 && flag))
                pre2 = tmp;
            else {
                pre1 = pre2;
                pre2 = tmp;
                flag = pre2 <= pre1;
                j = 1;
            }
        }

        if (j > 0 && abs(pre2 - pre1) > max_diff) max_diff = abs(pre2 - pre1);
        if (i == j || j != 1) j++;
    }

    cout << max_diff;

    return 0;
}