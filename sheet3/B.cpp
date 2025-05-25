1.// Problem name: (B) Searching .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 26/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    bool flag=false;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==x)
        {
            flag=true;
            cout<<j<<endl;
            break;
        }
    }
    if(!flag)
    {
        cout<<-1<<endl;
    }
}
