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

        string s; cin >> s;

        int mn = 0;

        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n-1-i])
                mn++;
        }

        int mx = n-mn;

        string t = "";

        for(int i = 0 ; i <= n; i++)
        {
            if(i >= mn && i <= mx)
            {
                if(n%2== 0)
                {
                    if((i-mn)% 2 == 0)
                        t.push_back('1');
                    else
                        t.push_back('0');
                }
                else
                     t.push_back('1');

            }
            else
                 t.push_back('0');
        }

        cout << t << nl;



    }
    return 0;
}
