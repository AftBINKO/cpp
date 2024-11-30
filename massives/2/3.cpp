#include <iostream>

using namespace std;

int main() {
    int n, pre, t;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            pre = mas[i];
            mas[i] = mas[n - 1];
        } else {
            t = mas[i];
            mas[i] = pre;
            pre = t;
        }
    }

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";

    delete[] mas;

    return 0;
}