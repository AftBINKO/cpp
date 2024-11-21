#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i = 1;
    double x = sqrt(0.5), eps;
    double a = x;  // , f = a;

    cin >> eps;
//    f = 1 + x;

    while (x > eps) {
        a = sqrt(0.5 + 0.5 * a);
        x *= a;
        i++;  // посчитал, что к i лучше прибавлять в конце цикла
        cout << x << endl;

    }

    cout << fixed << setprecision(3) << x << endl;

    return 0;
}
