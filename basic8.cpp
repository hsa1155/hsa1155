#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int sta=1;
        if(n==1||n==0) {cout<<"NO"<<endl; continue;}
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                sta=0;
                break;
            }
        }
        if(sta==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
