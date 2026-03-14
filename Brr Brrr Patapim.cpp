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
        ll grid [n+1][n+1];
        map<int,int>mp;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> grid[i][j];
                mp[i+j] = grid[i][j];
            }

        }

        vi v;
        set<int>st;

        for(int i = 1 ; i <= 2*n ; i++)
        {
            if(mp[i]!= 0)
                st.insert(mp[i]);
        }

        for(int i = 1 ; i <= 2*n ; i++)
        {
            if(st.find(i) == st.end())
            v.push_back(i);

        }

        for(int i = 1 ; i <= 2*n ; i++)
        {
            if(mp[i] == 0)
            {
                cout << v.back()<< " ";
                v.pop_back();
            }
            else
                cout << mp[i] <<" ";

        }
        cout << nl;


    }
    return 0;
}
