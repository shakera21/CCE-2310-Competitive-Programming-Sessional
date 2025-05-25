1.// Problem name: (W)Shape3 .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(long long int line=1;line<=n;line++)
    {
        for(long long space=1;space<=(n-line);space++)
        {
            cout<<" ";
        }
        for(long long star=1;star<=(2*line)-1;star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(long long int line=n;line>=1;line--)
    {
        for(long long space=1;space<=(n-line);space++)
        {
            cout<<" ";
        }
        for(long long star=1;star<=(2*line)-1;star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
