#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int N = 100;
    bool flag;

    int k = 0;
    char str[N], word[N];

    cin.getline(str, N);
    auto l1 = (unsigned int) strlen(str);

    cin.getline(word, N);
    auto l2 = (unsigned int) strlen(word);

    for (int i = (int) l1 - 1; i >= 0 && str[i] == ' '; i--) str[i] = '\0';
    for (int i = 0; str[i] != '\0'; i++)  // было немного лень избавляться от дублирования кода, но главное работает)
        if (str[i] == ' ') {
            if (i == 0) {
                while (str[0] == ' ') {
                    for (int j = 0; j < l1 - 1; j++)
                        str[j] = str[j + 1];
                    str[--l1] = '\0';
                }
            } else
                while (str[i + 1] == ' ') {
                    for (int j = i + 1; j < l1 - 1; j++)
                        str[j] = str[j + 1];
                    str[--l1] = '\0';
                }
        }

    for (int i = (int) l2 - 1; i >= 0 && word[i] == ' '; i--) word[i] = '\0';
    for (int i = 0; word[i] != '\0'; i++)
        if (word[i] == ' ') {
            if (i == 0) {
                while (word[0] == ' ') {
                    for (int j = 0; j < l2 - 1; j++)
                        word[j] = word[j + 1];
                    word[--l2] = '\0';
                }
            } else
                while (word[i + 1] == ' ') {
                    for (int j = i + 1; j < l2 - 1; j++)
                        word[j] = word[j + 1];
                    word[--l2] = '\0';
                }
        }

    l1 = (unsigned int) strlen(str);
    l2 = (unsigned int) strlen(word);

    while (k < l1) {
        flag = true;
        for (int i = k; flag && i < k + l2; i++) {
            if (str[i] == word[i - k]) {
                if (word[i - k + 1] == '\0')
                    flag = str[i + 1] == ' ' || str[i + 1] == '\0';
                else flag = true;
            } else flag = false;
        }

        for (int i = k; !(str[i] == '\0' || str[i] == ' '); i++) {
            if (flag)
                str[i] = ' ';
            if (str[i + 1] == '\0') k = i + 1;
            else if (str[i + 1] == ' ') k = i + 2;
        }
    }

    auto l = (unsigned int) strlen(str);
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ') {
            if (i == 0)
                while (str[0] == ' ') {
                    for (int j = 0; j < l - 1; j++)
                        str[j] = str[j + 1];
                    str[--l] = '\0';
                }
            else
                while (str[i + 1] == ' ') {
                    for (int j = i + 1; j < l - 1; j++)
                        str[j] = str[j + 1];
                    str[--l] = '\0';
                }
        }

    cout << str << endl;

    return 0;
}