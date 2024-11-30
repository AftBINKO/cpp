#include <iostream>

using namespace std;

int main() {
    int n;
    bool flag;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    for (int i = 0; i < n; i++) {
        flag = true;
        for (int j = i + 1; j < n; j++)
            if (mas[i] == mas[j]) {
                flag = false;
                break;
            }

        if (!flag) {
            cout << "NO" << endl;

            delete[] mas;
            return 0;
        }
    }

    cout << "YES" << endl;
    delete[] mas;

    return 0;
}