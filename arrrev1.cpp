#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    int brr[6];
    for(int i=0;i<6;i++) cin>>arr[i];
    for(int i=5;i>=0;i--) brr[5-i]=arr[i];
    for(int i=0;i<6;i++) arr[i]=brr[i];
    for(int i=0;i<6;i++) {cout<<arr[i]; if(i!=5) cout<<" ";}
    cout<<endl;

    return 0;
}
