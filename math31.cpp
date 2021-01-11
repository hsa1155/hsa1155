#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;

    while(scanf("%d",&a)!=EOF)
    {
        int sum=0;

        for(int i=1;i<=a;i++) if(i%2==0&&i%3==0&&i%12!=0) sum+=i;
        cout<<sum<<endl;
    }
}
