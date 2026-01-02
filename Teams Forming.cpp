#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);

    int count = 0 ;
    for(int i = 0 ; i < n; i+=2)
    {
        if(arr[i]!=arr[i+1])
        {
            count += abs(arr[i]-arr[i+1]);
        }
    }
    cout << count << endl;
    return 0;
}



