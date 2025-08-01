1.// Problem name: (K)Sum Digits .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 26/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n;
     cin>>n;
     string s;
     cin>>s;                                                                                                                                                                                                                             long long sum=0;
    for(int i=0;i<n;i++)
        sum= sum +(int)(s[i]-'0');
        cout<<sum<<endl;

}
