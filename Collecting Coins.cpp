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
        ll a,b,c,n; cin >> a>> b >> c >> n;
        ll mx =max(c,(max(a,b)));
        ll p = (mx-a)+(mx-b)+(mx-c);
        ll x = n-p;

        if(x >= 0 && x%3 == 0)
            yes
        else
           no


    }
    return 0;
}
