#include <iostream>

using namespace std;

int main() {
    int n, k, pre, t;
    cin >> n >> k;
    k %= n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    if (k != 0 && n != 1) {
        int *tmp = new int[n];
        for (int i = n - 1; i >= 0; i--) {
            if (i - k < 0) tmp[n - abs(i - k)] = mas[i];
            else tmp[i - k] = mas[i];
        }

        for (int i = 0; i < n; i++)
            mas[i] = tmp[i];

        delete[] tmp;
    }

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";

    delete[] mas;

    return 0;
}