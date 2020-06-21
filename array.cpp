#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    int n,arr[t];

    for(int i=0;i<t;i++)
    {
        cin>>n;
        arr[i]=n;

    }

    for(int i=t-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

