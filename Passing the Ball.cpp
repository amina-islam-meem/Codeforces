/*#include<bits/stdc++.h>
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

        int count= 0;
        vi v(n,0);
        v[0]= 1;

        for(int i = 0 ; i < n ; i++)
        {
            if(s[count] == 'R')
                count++;
            else
                count--;

                v[count] = 1;
        }

        int ans = 0;

        for(int val : v)
        {
            if(val == 1) ans++;
        }

        cout << ans << nl;


    }
    return 0;
}
*/

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

        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'L')
            {
                cout << i + 1 << nl;
                break;
            }
        }


    }
    return 0;
}
