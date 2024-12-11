#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    k %= n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < k; i++) {
        int t = mas[n - 1];
        for (int i = n - 1; i > 0; i--)
            mas[i] = mas[i - 1];
        mas[0] = t;
    }

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";

    delete[] mas;

    return 0;
}