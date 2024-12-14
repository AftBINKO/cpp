//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int main() {
//    const int MAX_LEN = 100;
//    int d, max_d = 0, uk1, uk2, k = 0;
//
//    char str[MAX_LEN];
//    cin.getline(str, MAX_LEN);
//    auto l = (unsigned int) strlen(str);
//
//    while (k < l) {
//        for (int i = k; !(str[i] == ' ' || str[i] == '\0'); i++)
//            if (str[i + 1] == ' ' || str[i + 1] == '\0') {
//                d = i - k + 1;
//
//                if (d > max_d) {
//                    max_d = d;
//                    uk1 = k;
//                    uk2 = i;
//                }
//                k = i + 2;
//            }
//    }
//
//    for (int i = uk1; i <= uk2; i++)
//        cout << str[i];
//
//    return 0;
//}