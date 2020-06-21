#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    stringstream ss(s);

    char ch;
    int a,b,c;
    ss>>a>>ch>>b>>ch>>c;

    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();

}
