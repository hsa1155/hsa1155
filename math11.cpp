#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int t=0,f=0,o=0;
    t=a/10;
    a-=(a/10)*10;
    f=a/5;
    a-=(a/5)*5;
    o=a;
    cout<<"NT10="<<t<<endl;
    cout<<"NT5="<<f<<endl;
    cout<<"NT1="<<o<<endl;
}
