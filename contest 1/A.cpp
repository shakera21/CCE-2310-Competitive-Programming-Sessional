1.// Problem name: (A)Winter Sale .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 26/5/25
#include<bits/stdc++.h>
using namespace std;
int main(){
double X,P;
cin>>X>>P;
double originalPrice =P/(1-X/100.0);
cout <<fixed<<setprecision(2)<<originalPrice<<endl;
return 0;
}
