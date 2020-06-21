#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m,n,inp;
    cin>>m>>n;

    vector<vector<int>>v(m);

    for(int i=0;i<m;i++)
    {
        cin>>inp;
        //v[i].resize(inp);
        for(int j=0;j<inp;j++)
        {
            cin>>v[i][j];
        }
    }
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        cout<<v[a][b]<<"\n";
    }
}
