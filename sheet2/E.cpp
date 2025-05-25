1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,n,mx=-1;
cin>>n;
for(int i=0;i<=n;i++)
    {
    cin>>a;
    if(a>mx)
        mx=a;
    }
    cout<<mx<<endl;
}
