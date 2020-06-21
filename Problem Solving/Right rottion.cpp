#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,r;
    cin>>n>>r;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(r>0)
    {

        int temp=arr[n-1];
        for(int i=n-1;i>-1;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        r--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
