#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        long long int  k=1;
        for(int i=1;i<=a;i++) k*=i;
        cout<<k<<endl;
    }
}

