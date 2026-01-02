#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        ll n,k; cin >> n >> k;
        ll ans = k + (k - 1) / (n - 1);
        cout << ans << endl;
    }
    return 0;
}
