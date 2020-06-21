#include<bits/stdc++.h>
using namespace std;

long long arr[10000][10000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,n;
    cin>>a>>b;

    for(int i=0;i<a;i++)
    {

        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];

        }
    }

    int x,y;
    for(int i=0;i<b;i++)
    {
        cin>>x>>y;
        cout<<arr[x][y]<<"\n";
    }


}
