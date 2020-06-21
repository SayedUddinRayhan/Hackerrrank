#include<bits/stdc++.h>
using namespace std;

stack<int>st;
stack<int>mx;
void solve()
{
    int q,v;
    cin>>q;

    switch(q)
    {
    case 1:
        cin>>v;
        if(v>=mx.top())
        {
            mx.push(v);
        }
        st.push(v);
        break;
    case 2:
        if(st.top()==mx.top())mx.pop();

        st.pop();
        break;

    case 3:
        cout<<mx.top()<<"\n";
        break;

    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    mx.push(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
