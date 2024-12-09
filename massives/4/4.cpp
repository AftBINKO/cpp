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
        for (int i = 0; i < n; i++) {
            tmp[(i + k) % n] = mas[i];
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