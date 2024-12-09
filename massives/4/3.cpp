#include <iostream>

using namespace std;

int main() {
    int n, pre;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    int t = mas[0];
    for (int i = 0; i < n - 1; i++)
        mas[i] = mas[i + 1];
    mas[n - 1] = t;

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";

    delete[] mas;

    return 0;
}