#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i = 2;
    double x, eps, f, a = 1;
    cin >> x >> eps;
    f = 1 + x;

    while (a > eps) {
        a *= x / i;
        f += a;
        i++;  // посчитал, что к i лучше прибавлять в конце цикла
    }

    cout << fixed << setprecision(3) << f << endl;

    return 0;
}
