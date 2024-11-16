#include <iostream>

using namespace std;
int main() {
	int max1, max2, max3, n;

    max1 = INT_MIN;
    max2 = INT_MIN;
    max3 = INT_MIN;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a > max1) {
            max3 = max2;
            max2 = max1;
            max1 = a;
        }
        else if (a > max2) {
            max3 = max2;
            max2 = a;
        }
        else if (a > max3) {
            max3 = a;
        }

    }

    cout << max3;

	return 0;
}
