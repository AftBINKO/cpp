#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int MAX_LEN = 100, D = 256;
    int *mas = new int[D];
    for (int i = 0; i < D; i++) mas[i] = 0;

    char str[MAX_LEN];
    cin.getline(str, MAX_LEN);
    auto l = (unsigned int) strlen(str);

    for (unsigned int i = 0; i < l; i++)
        mas[(unsigned int) ((unsigned char) str[i])]++;

    for (unsigned int i = 0; i < D; i++) {
        if (mas[i]) cout << (unsigned char) i << ' ' << mas[i] << endl;
    }

    delete[] mas;
    return 0;
}