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
        int n,k; cin >> n >> k;
        vector<int>v(n);
        vector<int>fre;
        map<int,int>mp;
        for(int i=0 ; i < n ; i++ )
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        for(auto val : mp)
        {
            fre.push_back(val.second);
        }

        srt(fre)

        int count = fre.size();

       for(auto val: fre)
            {
             if(k >= val)
              {
                k -= val;
                  count--;
              }
             else
                break;
        }


        cout <<max(1,count ) << nl;

    }
    return 0;
}
