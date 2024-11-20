#include <iostream>

using namespace std;

int main() {
    int a, b, c, x1, y1, x2, y2, f1, f2;

    cin >> a >> b >> c;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    f1 = a * x1 + b * y1 + c;
    f2 = a * x2 + b * y2 + c;

    if (f1 * f2 > 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
