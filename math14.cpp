#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int day=0,hr=0,minu=0,sec=0;
    day=a/86400;
    a-=day*86400;
    hr=a/3600;
    a-=hr*3600;
    minu=a/60;
    a-=minu*60;
    sec=a;
    cout<<day<<" days"<<endl;
    cout<<hr<<" hours"<<endl;
    cout<<minu<<" minutes"<<endl;
    cout<<sec<<" seconds"<<endl;
}
