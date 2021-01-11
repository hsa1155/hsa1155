#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    char s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s=='-')
        {
            int a1,b1,a2,b2;
            cin>>a1>>b1>>a2>>b2;
            cout<<a1-a2<<" "<<b1-b2;
        }
        if(s=='+')
        {
            int a1,b1,a2,b2;
            cin>>a1>>b1>>a2>>b2;
            cout<<a2+a1<<" "<<b2+b1;

        }
        if(s=='*')
        {
            int a1,b1,a2,b2;
            cin>>a1>>b1>>a2>>b2;
            cout<<a1*a2-b1*b2<<" "<<a1*b2+a2*b1;
        }
        if(i!=n) cout<<endl;

    }
}
