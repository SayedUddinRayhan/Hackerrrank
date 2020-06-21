#include<bits/stdc++.h>
using namespace std;

set<int>s;

void solve()
{
    int a,b;
    cin>>a>>b;
    switch(a)
    {
    case 1:
        s.insert(b);
        break;
    case 2:
        s.erase(b);
        break;

    case 3:
        auto it=s.find(b);
        if(it==s.end())
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
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

