#include<bits/stdc++.h>
using namespace std;

int solve(int w,int x,int y,int z)
{
    return max(w,(max(x,(max(y,z)))));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    cout<<solve(a,b,c,d)<<"\n";
}
