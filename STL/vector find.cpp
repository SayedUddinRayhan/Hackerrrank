#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int f;
    cin>>f;

    vector<int>::iterator s=find(v.begin(),v.end(),f);
    cout<<*s<<"\n";
}
