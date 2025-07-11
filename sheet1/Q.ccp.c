1.// Problem name: (Q)Coordinates of a Point.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    if (x > 0 && y > 0)
     {
        cout << "Q1";
    }
    if (x < 0 && y > 0)
    {
        cout << "Q2";
    }
    if (x < 0 && y < 0)
     {
        cout << "Q3";
    }
    if (x > 0 && y < 0) {
        cout << "Q4";
    }
   if (x == 0 && y == 0) {
        cout << "Origem";
    }
    if (y == 0 && x!=0) {
        cout << "Eixo X";
    }
    if (x == 0 && y!=0) {
        cout << "Eixo Y";
    }
}
