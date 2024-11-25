#include <iostream>

using namespace std;

int main() {
    int n, pred, cur, count = 2, max_count = count;
    bool pre_flag, flag;
    cin >> n;

    for (int i = 0; i < n; i++) {
        pred = cur;
        cin >> cur;

        if (i >= 1) {
            pre_flag = flag;
            flag = pred < cur;
        }
        if (i >= 2 && pre_flag != flag)
            count++;
        else
            count = 2;

        if (count > max_count)
            max_count = count;
    }

    cout << max_count;

    return 0;
}