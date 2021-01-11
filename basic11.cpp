#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    {
        int arr[x][y];
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++) cin>>arr[i][j];
        }
        for(int i=0;i<y;i++)
        {
            bool flag=false;
            for(int j=0;j<x;j++){
                    if(flag) cout<<" ";
            flag=true;

                cout<<arr[j][i];
            }

               cout<<endl;
        }
    }

}
