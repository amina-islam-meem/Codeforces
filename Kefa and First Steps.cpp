#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;cin>>N;
    int arr[N];
    int count = 1;int m = 1;
    for ( int i = 0 ; i < N ; i++)
    {
        cin >> arr[i];
    }
    for ( int i = 0 ; i < N -1; i++)
    {
        if(arr[i]<=arr[i+1])
            {
            count++;
        m = max(m,count);
            }
            else
                count=1;
    }
    cout<<m<<endl;

    return 0;
}
