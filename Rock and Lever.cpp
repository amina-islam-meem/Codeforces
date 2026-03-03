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
        int n; cin >> n;
        vi v(30);

        for(int i = 1 ; i <= n ; i++)
        {
            int x; cin >> x;
            v[__lg(x)]++;
        }

        ll count = 0;

        for(int i = 0 ; i < 30; i++)
           count += (1LL * v[i]*(v[i]-1))/2;


        cout << count << nl;



    }
    return 0;
}
