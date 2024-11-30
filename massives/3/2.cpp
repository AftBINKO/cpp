#include <iostream>

using namespace std;

int main() {
    int n, max = INT_MIN, max_i;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = n - 1; i >= 0; i--) {
        max = INT_MIN;
        for (int j = i; j >= 0; j--)
            if (mas[j] > max) {
                max = mas[j];
                max_i = j;
            }
        swap(mas[max_i], mas[i]);
    }

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";

    delete[] mas;
    return 0;
}