#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i = 2, d = -1;
    double x, eps, f;
    cin >> x >> eps;
    double a = 1;
    f = 1;

    while (a > eps) {
        a *= pow(x, 2) / ((i - 1) * i);
        f += d * a;

        d *= -1;
        i += 2;
    }

    cout << fixed << setprecision(3) << f << endl;

    return 0;
}
