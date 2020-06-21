#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int q,z;
    cin>>q;

    while(q--)
    {
        int s;
        cin>>s;
        auto it=lower_bound(v.begin(),v.end(),s);
        if(*it==s)cout<<"Yes ";

        else cout<<"No ";

        cout<<it-v.begin()+1<<"\n";
    }
}
