#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vector<int>v(n);
        for(int i = 0 ; i < n ;i++) cin >> v[i];

        ll sum= v[0];

        for(int i = 1 ; i < n ; i++)
        {
            sum |= v[i];
        }
        cout << sum << nl;


    }
    return 0;
}
