#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int total=0;
        for(int i=0;i<=n;i++)
        {
            if(i%3==0) total+=i;
        }
        cout<<total<<endl;

    }

}

