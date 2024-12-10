#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;

    cin >> n;
    int *mas1 = new int[n];
    for (int i = 0; i < n; i++)
        cin >> mas1[i];

    cin >> m;
    int *mas2 = new int[m];
    for (int i = 0; i < m; i++)
        cin >> mas2[i];

    sort(mas1, mas1 + n);
    sort(mas2, mas2 + m);

    int *mas3 = new int[n + m], i = 0, j = 0;
    for (int k = 0; k < n + m; k++) {
        if ((j >= m) || (i < n && mas1[i] <= mas2[j]))
            mas3[k] = mas1[i++];
        else
            mas3[k] = mas2[j++];
    }

    for (int k = 0; k < n + m; k++)
        cout << mas3[k] << " ";

    delete[] mas1;
    delete[] mas2;
    delete[] mas3;

    return 0;
}