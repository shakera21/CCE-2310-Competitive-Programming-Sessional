1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=s.size();
    //char b[a];
    //int counter=0;
    string ss="";
    for(int i=a-1;i>=0;i--)
    {
        //b[counter]=s[i];
        ss+=s[i];
        //counter++;
    }
    //cout<<s<<" "<<ss<<endl;
    bool flag=false;
    string ans="";
    for(int j=0;j<ss.size();j++)
    {
        if(ss[j]!='0') flag=true;
        if(flag==true) ans+=ss[j];
        ///else if()

    }
    cout<<ans<<endl;
    if(s!=ss) cout<<"NO"<<endl;
    else
    {
        if(ss[0]=='0') cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    //if(ss[0]=='0') cout<<"NO"<<endl;
    //else if(s==ss) cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
}
