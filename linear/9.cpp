#include <iostream>
#include <string>

using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c, x, y, z;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        z = a;
    else if (a <= b && a <= c)
        x = a;
    else y = a;

    if (b >= a && b >= c)
        z = b;
    else if (b <= a && b <= c)
        x = b;
    else y = b;

    if (c >= a && c >= b)
        z = c;
    else if (c <= a && c <= b)
        x = c;
    else y = c;

    a = z;
    b = y;
    c = x;

    cout << a << " " << b << " " << c << endl;

    return 0;
}
