1.// Problem name: (T)Shape2 .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
long long row;
cin>>row;
for(long long line=1;line<=row;line++)
{
    for(long long space=1;space<=(row-line);space++)
{
cout<<" ";
}

for(long long star=1;star <=(2*line-1);star++)

{
        cout<<"*";
    }
    cout<<endl;

}
}
