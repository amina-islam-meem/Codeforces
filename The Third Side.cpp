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

        int sum = 0;
        for(int i = 0 ; i < n; i++)
        {
            int x; cin >> x;
            sum += x;
        }

        cout << sum - (n-1) << nl;
    }
    return 0;
}
