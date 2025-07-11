1.// Problem name: (o) Coordinates of a Point.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    char x;
    cin>>n1>>x>>n2;
    if(x=='+')
    {
        cout<<n1+n2;
    }
    else if(x=='-')
    {
        cout<<n1-n2;
    }
    else if(x=='*')
    {
        cout<<n1*n2;
    }

    else if(x=='/')
    {
        cout<<n1/n2;
    }

}
