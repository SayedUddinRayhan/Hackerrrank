#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;

    cout<<a.length()<<" "<<b.length()<<"\n"<<a+b<<"\n";
    swap(a.at(0),b.at(0));
    cout<<a<<" "<<b<<"\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

}
