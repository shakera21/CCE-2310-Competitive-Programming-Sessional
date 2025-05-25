1.// Problem name: (D) Ali Baba and Puzzles.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 26/5/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((a + b * c == d) || (a * b + c == d) ||
        (a - b * c == d) || (a * b - c == d) ||
        (a + b - c == d) || (a - b + c == d)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
