#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vector<int>arr(n);

        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans = 0;
        for(int i = 0 ; i < n ; i++)
        {
            ans = ans + (arr[i]-arr[0]);
        }
        cout << ans << endl;


    }
    return 0;
}
