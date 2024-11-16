#include <iostream>

using namespace std;
int main() {
	int k, f = 1;
    cin >> k;

    for (int i = 1; i < k + 1; i++)
        f *= i;

    cout << f;

	return 0;
}
