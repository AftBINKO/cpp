#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int count = 0;
    bool flag;

    const int L = 41, MAX_LEN = 100;
    char gl[L] = "AaEeIiUuYyOo";

    char str[MAX_LEN];
    cin.getline(str, MAX_LEN);
    auto l = (unsigned int)strlen(str);

    for (unsigned int i = 0; i < l; i++) {
        flag = false;
        for (unsigned int j = 0; !flag && j < L; j++)
            if (str[i] == gl[j]) {
                flag = true;
                count++;
            }
    }

    cout << count << endl;

    return 0;
}
