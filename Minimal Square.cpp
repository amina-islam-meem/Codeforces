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
        int a,b; cin >> a >> b;

        if(a>=b)
        {
            int mx = max(a,2*b);
            cout <<mx*mx << nl;
        }
        else
        {
            int mx = max(b,2*a);
            cout <<mx*mx << nl;
        }



    }
    return 0;
}
