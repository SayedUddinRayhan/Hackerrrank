#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin>>n;

    vector<long long>v(n);
    vector<long long>::iterator low;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;

    for(int i=0;i<q;i++)
    {
        long long b;
        cin>>b;
        low=lower_bound(v.begin(),v.end(),b);
        if(binary_search(v.begin(),v.end(),b))
        {
            cout<<"Yes "<<low-v.begin()+1<<"\n";
        }
        else
        {
            cout<<"No "<<low-v.begin()+1<<"\n";
        }
    }
}
