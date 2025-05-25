1.// Problem name: (X) Convert To Decimal 2.
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
        long long n,one=0,r,ans;
        cin>>n;
        while(n!=0)
        {
            r=n%2;
            if(r==1) one++;
            n=n/2;
        }
        ans=pow(2,one)-1;
        cout<<ans<<endl;
    }
}
