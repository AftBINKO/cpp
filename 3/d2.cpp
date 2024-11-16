#include <iostream>

using namespace std;

int main() {
    int n, t;
    bool upper = true, lower = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i == 0) {
            t = a;
            continue;
        }
        if (a > t)
            lower = false;
        else if (a < t)
            upper = false;
        t = a;
    }

    if (lower || upper)
        cout << "DA";
    else
        cout << "NET";

    return 0;
}
