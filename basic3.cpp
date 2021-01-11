#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        if(x*x+y*y>200*200) printf("outside\n");
            else printf("inside\n");
    }
}
