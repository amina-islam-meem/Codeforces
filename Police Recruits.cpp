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
    int count1 = 0;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==-1)
        {
            if(count >0)
                count--;
            else
                count1++;
        }
        else
            count+=arr[i];
    }
    cout<<count1<<endl;
    return 0;
}
