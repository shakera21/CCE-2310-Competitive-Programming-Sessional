1.// Problem name: (Q) Digits.
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
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--)
        {
            cout<<s[i]-'0'<<" ";
        }
        cout<<endl;
    }
}
