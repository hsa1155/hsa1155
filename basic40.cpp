#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],brr[10],crr[10];
    for(int i=0;i<10;i++)
    {
        char c;
        cin>>c;
        if(c=='X') arr[i]=10;
        else arr[i]=(int)c -48;
    }
    brr[0]=arr[0];
    for(int i=1;i<10;i++) brr[i]=brr[i-1]+arr[i];
    crr[0]=brr[0];
    for(int i=1;i<10;i++) crr[i]=crr[i-1]+brr[i];
    if(crr[9]%11==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
