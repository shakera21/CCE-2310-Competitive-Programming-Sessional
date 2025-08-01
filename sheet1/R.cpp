1.// Problem name: (R) Age in Days .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<(n/365)<<" years"<<endl;
    n=n%365;
    cout<<(n/30)<<" months"<<endl;
    n=n%30;
    cout<<n<<" days"<<endl;
}
