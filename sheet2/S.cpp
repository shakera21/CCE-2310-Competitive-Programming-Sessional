1.// Problem name: (S)Sum of Consecutive Odd Numbers .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        long long a, b;
        cin >> a >> b;
        long long min_v, max_v;

        if(a >= b)
        {
            max_v = a;
            min_v = b;
        }
        else
        {
            max_v = b;
            min_v = a;
        }

        int sum = 0;
        for(int k = min_v + 1; k <= max_v - 1; k++)
        {
            if(k % 2 != 0)
            {
                sum = sum + k;
            }
        }
        cout << sum << endl;
    }
}
