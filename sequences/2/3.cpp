#include <iostream>

using namespace std;

int main() {
    int n, t, d;
    cin >> n;
    bool flag = true;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i == 0) {
            t = a;
            continue;
        } else if (i == 1)
            d = a - t;
        else if ((a - t) != d)
            flag = false;
        t = a;
    }

    if (flag)
        cout << "DA";
    else
        cout << "NET";

    return 0;
}
