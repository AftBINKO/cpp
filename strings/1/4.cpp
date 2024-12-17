#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int N = 100;
    char str[N];
    int cnt = 0;

    cin.getline(str, N);
    auto l = (unsigned int) strlen(str);

    for (int i = 0; cnt >= 0 && i < l; i++) {
        if (str[i] == '(') cnt++;
        else if (str[i] == ')') cnt--;
    }

    if (cnt == 0) cout << "OK" << endl;
    else cout << "NO" << endl;

    return 0;
}