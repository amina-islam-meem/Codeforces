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
        int l,r; cin >> l >> r;

        if (2*l <= r)
            cout << l << " " << 2*l << nl;

       else
           cout << -1 << " " << -1 << nl;


    }
    return 0;
}
