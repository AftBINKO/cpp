#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    bool flag = false;
    for (int j = 0; !flag && j < n; j++) {
        flag = true;
        for (int i = n - 2; i >= 0; i--)
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