#include<bits/stdc++.h>
using namespace std;

int main()
{
    int col,row;
    cin>>col>>row;
    vector<vector<int>>v;
    v.resize(col,vector<int>(row));

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }


}
