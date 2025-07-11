1.// Problem name: (Y)The last 2 digits.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    int x=a*b*c*d;
    int y=x%100;
    if(y<10)
    {
        cout<<0<<y<<endl;
    }
    else
    {
        cout<<y<<endl;
    }
}
