1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long a,b,c;
 char s,q;
 cin>>a>>s>>b>>q>>c;
    if(s=='+')
    {
        if(a+b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a+b;
        }
    }
    else if(s=='-')
    {
        if(a-b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a-b;
        }
    }
    else if(s=='*')
    {
        if(a*b==c)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<a*b;
        }
    }
}
