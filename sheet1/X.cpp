1.// Problem name: (X) Two intervals.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c>a && c<=b)
    {
        if(d>=b)
        {
            cout<<c<<" "<<b;
        }
        else if(b>=d)
        {
            cout<<c<<" "<<d;
        }
    }
    else if(a>=c && a<=d)
    {
        if(b>=d)
        {
            cout<<a<<" "<<d;
        }
        else if(d>=b)
        {
            cout<<a<<" "<<b;
        }
    }
    else
    {
        cout<<-1;
    }
}
