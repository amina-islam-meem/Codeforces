#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n , m;
    long long d = 1,ans = 0;
    cin >> n >> m;
    int arr[m];
    for(int i = 0 ; i < m ; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0 ; i < m ; i++)
    {
       if (arr[i] >= d)
            {
            ans += arr[i] - d;
        } else {
            ans += n - (d - arr[i]);
        }
        d = arr[i];
    }
    cout << ans<< endl;
    return 0;
}
