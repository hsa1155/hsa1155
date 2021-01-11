#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(3<=n&&n<=5)
        {cout<<"Spring"<<endl; continue;}
        if(6<=n&&n<=8) {cout<<"Summer"<<endl; continue;}
        if(9<=n&&n<=11) {cout<<"Autumn"<<endl; continue;}
        cout<<"Winter"<<endl;

    }

}
