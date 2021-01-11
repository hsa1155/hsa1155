#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int p=0,f=0;
        if(a>=60) p++; else f++;
        if(b>=60) p++; else f++;
        if(c>=60) p++; else f++;
        if(p==3)
        {
            cout<<"P"<<endl;
            continue;
        }
        if(p==2&&a+b+c>=220)
        {
            cout<<"P"<<endl;
            continue;
        }
        if(p==2&&a+b+c<220)
        {
            cout<<"M"<<endl;
            continue;
        }
        if(f==2&&(a>=80||b>=80||c>=80))
        {
            cout<<"M"<<endl;
            continue;
        }
        cout<<"F"<<endl;

    }

}
