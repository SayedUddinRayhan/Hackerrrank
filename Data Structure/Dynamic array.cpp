#include<bits/stdc++.h>
using namespace std;
vector<int>v[100001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int la=0,n,q;
    cin>>q>>n;


    for(int i=0;i<n;i++)
    {
        int q1,x,y;
        cin>>q1>>x>>y;

        if(q1==1)
        {
            v[(x^la)%q].push_back(y);
        }

        else{
            la=v[(x^la)%q][y%(v[(x^la)%q].size())];
            cout<<la<<"\n";
        }
    }
}
