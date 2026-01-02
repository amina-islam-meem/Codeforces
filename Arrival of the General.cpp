#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;cin>>n;
    int arr[n];
    int count = 0;
    int maxA = 0;
    int maxI = 0;
    int minA =101;
    int minI = n-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxA)
        {
            maxA=arr[i];
            maxI=i;
        }
        if(arr[i]<=minA)
        {
            minA=arr[i];
            minI=i;
        }
    }
    if(minI>maxI)
    {
        cout<<maxI+n-1-minI<<endl;
    }
    else
    {
        cout<<maxI+n-2-minI<<endl;
    }

    return 0;
}
