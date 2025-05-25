1.// Problem name: (j) Primes from 1 to n .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        count = 0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            cout<<i<<" ";
        }
    }
}
