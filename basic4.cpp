#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    int total=(h2-h1)*60+m2-m1;
    int money;
    if(total<=120)
    {
        total=total/30;
        money=total*30;
    }
    else if(total<=240)
    {
        total-=120;
        total/=30;
        money=total*40+120;
    }
    else
    {
        total-=240;
        total/=30;
        money=total*60+280;
    }
    cout<<money<<endl;
    return 0;
}
