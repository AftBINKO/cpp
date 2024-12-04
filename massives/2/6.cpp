#include <iostream>

using namespace std;

int main() {
    int n, f, k = -1;

    cin >> n;
    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];
    cin >> f;

    for (int i = 0; k == -1 && i < n; i++)
        if (mas[i] == f) k = i;

    cout << k << endl;

    delete[] mas;

    return 0;
}