#include <iostream>

using namespace std;

int main() {
    int n, min = INT_MAX, max = INT_MIN, min_i, max_i;
    cin >> n;

    int *mas = new int[n];

    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < n; i++) {
        if (mas[i] <= min) {
            min = mas[i];
            min_i = i;
        }
        if (mas[i] >= max) {
            max = mas[i];
            max_i = i;
        }
    }

    cout << min << " (" << min_i << ")" << endl;
    cout << max << " (" << max_i << ")" << endl;

    delete[] mas;

    return 0;
}

