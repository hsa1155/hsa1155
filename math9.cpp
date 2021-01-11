#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a>31) cout<<"Value of more than 31"<<endl;
        else cout<<(int)pow(2,a)<<endl;
    }
}


