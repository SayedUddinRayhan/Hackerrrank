#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    stringstream ss(s);
    int n;
    char ch;
    vector<int>v;
    while(ss>>n)
    {
        v.push_back(n);
        ss>>ch;

    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\n";
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();

}

