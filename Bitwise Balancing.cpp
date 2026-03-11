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


bool kth_bit_on(ll n, int k)
{
   return ((n >> k) & 1);
}

ll bit_on(ll n, int k)
{
   return (n|(1LL<<k));
}
ll bit_off(ll n, int k)
{
   return (n&(~(1LL<<k)));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int T; cin >>  T;
    while(T--)
    {
        ll b,c,d; cin >> b >> c >> d;
        ll a = b;

        int MSB = max({__lg(b),__lg(c),__lg(d)});

        for(int k = 0 ; k <= MSB ; k++)
        {
            if(!kth_bit_on(b,k) && kth_bit_on(d,k))
                a = bit_on(a,k);

             if(kth_bit_on(c,k) && kth_bit_on(d,k))
                a = bit_off(a,k);

        }

        if((a|b)-(a&c) == d)
            cout << a << nl;
        else
            cout << -1 << nl;


    }
    return 0;
}
