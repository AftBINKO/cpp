#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c, x0, y0;

    cin >> a >> b >> c;
    cin >> x0 >> y0;

    double distance = abs(a * x0 + b * y0 + c) / sqrt(a * a + b * b);
    cout << fixed << setprecision(3) << distance << endl;

    return 0;
}
