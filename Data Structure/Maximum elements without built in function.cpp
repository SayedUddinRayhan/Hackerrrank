#include<bits/stdc++.h>
using namespace std;

int top=-1,stk[10000],mstk[10000];

void push()
{
    top++;
    int x;
    cin>>x;
    if(x>=mstk[top])mstk[x];

    stk[top]=x;

}
void solve()
{
    int n;
    cin>>n;
    switch(n)
    {
    case 1:
        push();
        break;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    mstk[top]=0;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
