#include<bits/stdc++.h>
using namespace std;

map<string,int>m;
void solve()
{
    string s;
    int n;
    short q;
    cin>>q>>s;
    switch(q)
    {
    case 1:
        cin>>n;
        m[s]+=n;
        break;
    case 2:
        m.erase(s);
        break;
    case 3:
        auto x=m.find(s);
        if(x==m.end())
        {
            cout<<"0\n";
        }
        else
        {
            cout<<x->second<<"\n";
        }
        break;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
