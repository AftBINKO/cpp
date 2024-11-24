#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x = sqrt(0.5), res = x, pred_x = 0, eps, pi;
    cin >> eps;

    while ((x - pred_x) > eps) {
        pred_x = x;
        x = sqrt(0.5 + 0.5 * x);
        res *= x;
    }

    pi = 2 / res;
    cout << fixed << setprecision(3) << pi << endl;

    return 0;
}
