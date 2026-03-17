#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n,x; cin >> n >> x;

        vi v(n);

        for(int i = 0; i < n ; i++)cin >> v[i];

        int mx =v[0];

        for(int i = 0; i < n-1 ; i++)
        {
            mx = max(mx, v[i+1]-v[i]);
        }

        cout << max(mx,(x-v[n-1])*2) << nl;


    }
    return 0;
}
