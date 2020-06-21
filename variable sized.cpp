#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m,n;
    cin>>m>>n;

    vector<vector<int>>v(m);

    for(int i=0;i<v.size();i++)
    {
        int k;
        cin>>k;
        v[i].resize(k);
        for(int j=0;j<k;j++)
        {
            cin>>v[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        int p,q;
        cin>>p>>q;
        cout<<v[p][q]<<"\n";
    }
}
