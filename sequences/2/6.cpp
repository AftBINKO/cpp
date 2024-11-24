#include <iostream>

using namespace std;

int main() {
    int pre, cur, post, n, a;
    cin >> n;

    for (int i = 0; i < n; i++) {
        switch (i) {
            case 0:
                cin >> pre;
                break;
            case 1:
                cin >> cur;
                break;
            case 2:
                cin >> post;
                break;
            default:
                pre = cur;
                cur = post;
                cin >> post;
                break;
        }

        if (i >= 2 && cur > pre && cur > post)
            cout << cur << " (" << i - 1 << ") ";
    }

    return 0;
}