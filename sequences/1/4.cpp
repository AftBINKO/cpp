#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i = 3;
    double x, eps, f;
    cin >> x >> eps;
    double a = x;
    f = x;

    while (abs(a) > eps) {
        a *= -(x * x) / ((i - 1) * i);
        f += a;
        i += 2;
    }

    cout << fixed << setprecision(3) << f << endl;

    return 0;
}
