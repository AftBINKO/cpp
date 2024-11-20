#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;

    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    int d = a1 * b2 - a2 * b1;

    if (d == 0) {
        if (a1 * c2 == a2 * c1) {
            cout << "inf" << endl;
        } else {
            cout << "no" << endl;
        }
    } else {
        int x = (b1 * c2 - b2 * c1) / d;
        int y = (a2 * c1 - a1 * c2) / d;
        cout << x << " " << y << endl;
    }

    return 0;
}
