#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;cin>>n;
    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    int sum1 = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
             if(i==j)
             {
                 sum += arr[i][j];
             }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
             if(i+j==(n-1))
             {
                 sum1 += arr[i][j];
             }
        }
    }
    cout<<abs(sum-sum1)<<endl;

    return 0;
}
