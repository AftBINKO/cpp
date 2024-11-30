#include <iostream>

using namespace std;

int main() {
    int n, t, mas[10];
    cin >> n;

    for (int & ma : mas) ma = 0;
    for (int i = 1; i < n + 1; i++) {
        t = i;
        while (t > 0) {
            mas[t % 10]++;
            t /= 10;
        }
    }
    for (int & ma : mas) cout << ma << endl;

    return 0;
}