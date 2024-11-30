#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = n - 2; i >= 0; i--) {
        for (int j = i; j < n - 1; j++) {
            if (mas[i] < mas[i + 1])
                swap(mas[i], mas[i + 1]);
        }

        for (int j = 0; j < n; j++)
            cout << mas[j] << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";

    delete[] mas;
    return 0;
}