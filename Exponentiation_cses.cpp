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

    const long long MOD = 1e9 + 7;

    int T; cin >>  T;
    while(T--)
    {
        ll a,b; cin >> a >> b;


        if(a == 0 && b == 0)
            {
            cout << 1 <<nl;
            continue;
           }

        ll an  = 1;
        a %= MOD;

        while(b > 0)
            {
            if(b & 1)
                an =(an* a) % MOD;


            a = (a * a)% MOD;
            b >>= 1;
           }

        cout << an<< nl;


    }
    return 0;
}
