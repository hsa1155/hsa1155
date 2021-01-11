#include<bits/stdc++.h>
using namespace std;
int main()
{
    float arr[10];
    for(int i=0;i<10;i++) cin>>arr[i];
    float maxn=0;
    float minn=0x3f3f3f3f;
    for(int i=0;i<10;i++)
    {
        maxn=max(arr[i],maxn);
        minn=min(arr[i],minn);
    }
    printf("maximum:%.2f\nminimum:%.2f\n",maxn,minn);

}
