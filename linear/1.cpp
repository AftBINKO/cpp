#include <iostream>

using namespace std;
int main() {
    int n, m, max;
    cin >> n >> m;
    if (n > m)
        cout << n;
    else if (m > n)
        cout << m;
    else
        cout << "Chisla ravni";
    return 0;
}
