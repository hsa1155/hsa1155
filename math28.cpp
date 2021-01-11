#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;

    while(scanf("%d",&a)!=EOF)
    {
        bool flag=false;

        for(int i=1; i<=a; i++)
        {
            if(i%5==0&&i%7==0)
            {
                if(flag)
                    cout<<" ";
                else
                    flag=true;
                cout<<i;
            }
        }
        cout<<endl;

    }
}
