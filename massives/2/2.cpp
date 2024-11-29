#include <iostream>

using namespace std;

int main() {
    int n, min = INT_MAX, min_i, max = INT_MIN, max_i;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
        if (mas[i] >= max) {
            max = mas[i];
            max_i = i;
        }
        if (mas[i] <= min) {
            min = mas[i];
            min_i = i;
        }
    }

    mas[max_i] = min;
    mas[min_i] = max;

    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }

    delete[] mas;

    return 0;
}