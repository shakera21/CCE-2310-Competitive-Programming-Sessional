1.// Problem name: (H) one prime.
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
    bool flag = true;
    for (long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
         flag=false;
        break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
