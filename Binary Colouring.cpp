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
        ll n; cin >> n;
        vll ans;
         while(n > 0)
            {
            if(n % 2 == 0)
                ans.push_back(0);

            else
            {
                ll m = 2 - (n% 4);
                if(m == 2)
                    m = -1;

                ans.push_back(m);
                n -= m;
            }

            n/= 2;
        }

        cout << ans.size()<< endl;

        for(int val : ans)
           cout << val << " ";

        cout << nl;
    }
    return 0;
}

