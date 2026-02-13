#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'



ll n, k;
ll sum(ll f, ll s)
{
    if (f == s)
        return f;
    return ((f + s) * (s - f + 1))/ 2LL;
}


bool check(ll mid)
{
    if (sum(k, mid) <= sum(mid + 1, k + n - 1))
        return true;
    else
        return false;
}

bool check1(ll mid)
{
    if (sum(k, mid-1) >= sum(mid, k + n - 1))
        return true;
    else
        return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {

    cin >> n >> k;

    ll l = k;
    ll r = k + n;

    while(l + 1 < r)
    {
        ll mid =(l + r)/ 2;


        if (check(mid))
            l = mid;
        else
            r = mid;
    }

    ll l1 = k;
    ll r1 = k +n;

    while (l1+ 1 < r1)
    {
        ll mid= (l1+ r1)/2;

        if (check1(mid))
            r1 = mid;
        else
            l1= mid;
    }

    cout << min(sum(l + 1, n + k - 1) - sum(k, l), sum(k, r1 - 1) -sum(r1, n + k - 1)) << nl;


    }
    return 0;
}
