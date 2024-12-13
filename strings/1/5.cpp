#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int N = 100;
    int l = 0;

    char str[N];
    cin.getline(str, N);
    for (int i = 0; str[i] != '\0'; i++) l++;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            if (i == 0) {
                while (str[0] == ' ') {
                    for (int j = 0; j < l - 1; j++) {
                        str[j] = str[j + 1];
                    }
                    str[--l] = '\0';
                }
            } else {
                while (str[i + 1] == ' ') {
                    for (int j = i + 1; j < l - 1; j++) {
                        str[j] = str[j + 1];
                    }
                    str[--l] = '\0';
                }
            }
        }
    }

    cout << str << endl;

    return 0;
}