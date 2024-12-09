#include <iostream>

using namespace std;

int main() {
    int n, min = INT_MAX, max = INT_MIN, min_i, max_i;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < n; i++) {
        if (mas[i] < min) {
            min = mas[i];
            min_i = i;
        }
        if (mas[i] > max) {
            max = mas[i];
            max_i = i;
        }
    }

    if (max_i < min_i) swap(max_i, min_i);

    bool flag = false;
    for (int j = min_i; !flag && j < max_i; j++) {
        flag = true;
        for (int i = max_i - 1; i >= min_i; i--)
            if (mas[i] > mas[i + 1]) {
                swap(mas[i], mas[i + 1]);
                flag = false;
            }
    }

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";

    delete[] mas;
    return 0;
}