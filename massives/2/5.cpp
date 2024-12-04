#include <iostream>

using namespace std;

int main() {
    int n;
    bool flag;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas[i];

    flag = true;
    for (int i = 0; flag && i < n; i++) {
        for (int j = i + 1; flag && j < n; j++)
            if (mas[i] == mas[j])
                flag = false;
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    delete[] mas;

    return 0;
}