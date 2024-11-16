#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int fact = 1;
    double x, eps, f;
    cin >> x >> eps;
    f = 1 + x;

    for (int i = 2;; i++) {
        double a;
        fact *= i;
        a = pow(x, i) / fact;
        f += a;

        if (a < eps)
            break;
    }

    cout << round(f*1000) / 1000 << endl;

    return 0;
}
