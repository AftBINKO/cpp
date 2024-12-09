#include <iostream>

using namespace std;

int main() {
    int n, a, remnants[10];
    cin >> n;

    int *numbers = new int[n];
    for (int & remnant : remnants) remnant = 0;
    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    for (int i = 0; i < n; i++) {
        a = numbers[i];
        if (a == 0) remnants[0]++;
        while (a > 0) {
            remnants[a % 10]++;
            a /= 10;
        }
    }

    for (int remnant : remnants) cout << remnant << endl;

    delete[] numbers;
    return 0;
}