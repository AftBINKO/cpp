#include <iostream>

using namespace std;

int main() {
    int n, t;

    int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    int cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0;

    cin >> n;

    for (int i = 1; i < n + 1; i++) {
        t = i;
        while (t > 0) {
            switch (t % 10) {
                case 0:
                    cnt0++;
                    break;
                case 1:
                    cnt1++;
                    break;
                case 2:
                    cnt2++;
                    break;
                case 3:
                    cnt3++;
                    break;
                case 4:
                    cnt4++;
                    break;
                case 5:
                    cnt5++;
                    break;
                case 6:
                    cnt6++;
                    break;
                case 7:
                    cnt7++;
                    break;
                case 8:
                    cnt8++;
                    break;
                case 9:
                    cnt9++;
                    break;

            }
            t /= 10;
        }
    }

    cout << cnt0 << " " << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << " ";
    cout << cnt5 << " " << cnt6 << " " << cnt7 << " " << cnt8 << " " << cnt9;

    return 0;
}