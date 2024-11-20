#include <iostream>

using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;

    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    int d = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (d == 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
