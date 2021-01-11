#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a<=800)
        {
            printf("%.1lf\n",(double)a*0.9);
            continue;
        }
        else if(a<=1499)
        {
            printf("%.1lf\n",a*0.9*0.9);
            continue;
        }
        else
        {
            printf("%.1lf\n",a*0.9*0.79);
            continue;
        }
    }
}
