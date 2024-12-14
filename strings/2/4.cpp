//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main() {
//    const int N = 100;
//    char str[N];
//
//    cin.getline(str, N);
//    auto l = (unsigned int) strlen(str);
//
//    int n, count = 0, k = 0, d, uk1, uk2;
//    cin >> n;
//
//    while (k < l && count < n) {
//        for (int i = k; !(str[i] == ' ' || str[i] == '\0') && count < n; i++)
//            if (str[i + 1] == ' ' || str[i + 1] == '\0') {
//                count++;
//                if (count == n) {
//                    uk1 = k;
//                    uk2 = i;
//                }
//                k = i + 2;
//            }
//    }
//
//    for (int i = uk1; str[0] != '\0' && i <= uk2 + 1; i++) {
//        for (int j = uk1; str[0] != '\0' && j < l - 1; j++)
//            str[j] = str[j + 1];
//        str[--l] = '\0';
//    }
//
//    cout << str << endl;
//
//    return 0;
//}