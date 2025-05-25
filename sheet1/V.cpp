#incl1.// Problem name: (I) Palindrome.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 5/5/25ude<bits/stdc++.h>
using namespace std;
int main()
{
  long long A,B;
  char S;
    cin>>A>>S>>B;
    if(S=='<')
    {
        if(A<B)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if(S=='>')
    {
        if(A>B)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if(S=='=')
    {
        if(A==B)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
}
