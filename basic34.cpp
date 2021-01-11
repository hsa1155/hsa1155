#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,s;
    while(scanf("%d%d",&w,&s)!=EOF)
    {
        if(s==1) printf("%.1f\n",(double)(w-80)*0.7);
        else printf("%.1f\n",(double)(w-70)*0.6);
    }
}
