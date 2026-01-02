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

    ll n ; cin >> n;
    multiset<int>ms;
    for(int i = 1 ; i <= n ; i++)
    {
        int x;cin >> x;
        ms.insert(x);

    }
    //sort(v.begin(),v.end());
    int count = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        auto it = ms.lower_bound(i);
        if(it != ms.end())
        {
            count++;
            ms.erase(it);
        }
    }
    cout << count << nl;
    return 0;
}
