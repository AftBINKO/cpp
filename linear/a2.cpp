#include <iostream>
#include <cmath>

using namespace std;
int main() {
	float a, b, c, d, x1, x2;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);
		cout << "x1 = " << x1 << "\nx2 = " << x2;
	}
	else if (d == 0) {
		x1 = (-b) / (2 * a);
		cout << "x1 = " << x1;
	}
	else
		cout << "Net korney";

	return 0;
}
