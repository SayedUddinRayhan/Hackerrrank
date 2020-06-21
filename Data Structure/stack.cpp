#include<bits/stdc++.h>
using namespace std;
stack<int>s;
stack<int>mxs;

void solve()
{
    int n,x;
    cin>>x;

    switch(x)
    {
    case 1:
        cin>>n;
        if(n>=mxs.top())
        {
            mxs.push(n);
        }

        s.push(n);
        break;

    case 2:
        if(s.top()==mxs.top())mxs.pop();

        s.pop();
        break;
    case 3:
        cout<<mxs.top()<<"\n";
        break;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    mxs.push(0);
    int t;
    cin>>t;

    while(t--)
    {
        solve();
    }
}
