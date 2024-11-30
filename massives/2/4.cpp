#include <iostream>

using namespace std;

int main() {
    int n, max = INT_MIN;
    bool flag;
    cin >> n;

    int *mas = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
        if (mas[i] > max) max = mas[i];
    }

    for (int i = max + 1;; i++) {
        flag = true;
        for (int j = 0; j < n; j++) {
            if (mas[j] == i) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << i << endl;
            break;
        } else if (i == max) {
            cout << "not found" << endl;
            break;
        }
    }

    delete[] mas;

    return 0;
}