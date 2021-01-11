#include<bits/stdc++.h>
using namespace std;
int re(int n)
{
    if(n==0||n==1) return n+1;
    else return re(n-1)+re(n/2);
}
int main()
{
    int n;
    cin>>n;
    cout<<re(n)<<endl;
}
