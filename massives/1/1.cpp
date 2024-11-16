#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *mas = new int[n];

    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < n / 2; i++) {
        mas[i] += mas[n - i - 1];
        mas[n - i - 1] = mas[i] - mas[n - i - 1];
        mas[i] -= mas[n - i - 1];
    }

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;

    delete[] mas;

    return 0;
}

