#include<bits/stdc++.h>

using namespace std;
int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b)!=EOF)

    {
        if(a<=60) printf("%.1lf\n",a*b);
        else if(a<=120) printf("%.1lf\n",(a-60)*b*1.33+b*60);
        else printf("%.1lf\n",(a-120)*b*1.66+b*60+b*60*1.33);
    }
}




