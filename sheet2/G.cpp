1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        long long fact = 1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*=i;
        }
        cout<<fact<<endl;
    }
}
