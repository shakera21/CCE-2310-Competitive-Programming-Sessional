1.// Problem name: (B)Let's use Getline.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 6/7/25
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
for(int i = 0;i <s.size();i++)
    {
        if(s[i]=='\\')
            break;
        else
            cout<<s[i];
    }
}
