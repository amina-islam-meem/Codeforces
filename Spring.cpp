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


ll lcm(ll a, ll b)
 {
    return a / __gcd(a, b) * b;
}

ll lcm(ll a, ll b, ll c)
 {
    return lcm(lcm(a, b), c);
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        ll a,b,c,m ;
        cin >> a >> b >> c >> m;

       ll A_days = m/a;
       ll B_days = m/b;
       ll C_days = m /c;

       ll A_Bdays = m/lcm(a,b);
       ll B_Cdays = m/lcm(b,c);
       ll A_Cdays = m / lcm(c,a);
       ll all = m/lcm(a,b,c);

        ll Aa = (A_days - A_Bdays - A_Cdays + all)*6*(1LL) + 3*((A_Bdays - all) + (A_Cdays - all))*(1LL) + 2*all;
        ll Bb= (B_days - A_Bdays - B_Cdays + all)*6*(1LL) + 3*((A_Bdays - all) + (B_Cdays - all))*(1LL) + 2*all;
        ll Cc = (C_days - A_Cdays - B_Cdays + all)*6*(1LL) + 3*((A_Cdays - all) + (B_Cdays - all))*(1LL) + 2*all;

        cout << Aa << " " << Bb << " " << Cc << nl;


    }
    return 0;
}
