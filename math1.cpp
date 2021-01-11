#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        printf("Trapezoid area:%.1f\n",(double)(a+b)*(double)c/2.0);
    }
}
