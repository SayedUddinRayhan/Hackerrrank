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

        int temp=arr[0];
        for(int i=0;i<n;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
        r--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
