#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int MAX_LEN = 100, D = 'a' - 'A';

    char str[MAX_LEN];
    cin.getline(str, MAX_LEN);
    auto l = (unsigned int) strlen(str);

    for (unsigned int i = 0; i < l; i++) {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] -= D;
        else if ('A' <= str[i] && str[i] <= 'Z')
            str[i] += D;
    }

    cout << str << endl;

    return 0;
}