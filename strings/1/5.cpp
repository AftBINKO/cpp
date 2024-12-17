#include <iostream>

using namespace std;

int main() {
    const int N = 100;
    int l = 0;

    char str[N];
    cin.getline(str, N);
    for (int i = 0; str[i] != '\0'; i++) l++;

    bool is_first = true, is_end = true;
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i; str[j] != '\0'; j++)
            if (str[j] != ' ') {
                is_end = false;
                break;
            }
        if (is_end) break;
        if (is_first) {
            if (str[i] != ' ') {
                is_first = false;
                cout << str[i];
            }
        } else if (str[i] != ' ' || str[i + 1] != ' ')
            cout << str[i];
    }

    return 0;
}