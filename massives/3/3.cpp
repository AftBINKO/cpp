#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j > 0; j--)
            if (mas[j - 1] < mas[j])
                swap(mas[j], mas[j - 1]);

    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";

    delete[] mas;
    return 0;
}