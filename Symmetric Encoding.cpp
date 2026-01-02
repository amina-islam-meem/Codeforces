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
    int t ; cin >> t;
    while(t--)
    {

    int n ; cin >> n;
    string s; cin >> s;
    string p = s;
    sort(s.begin(),s.end());
    set<char>r;
    for(char c : s)
    {
        r.insert(c);
    }

        vector<char> v(r.begin(),r.end());
        vector<char> v1 = v ;
        reverse(v1.begin(),v1.end());

        map<char,char> mp;

        for(int i = 0; i < v.size(); i++)
        {
            mp[v[i]] = v1[i];
        }
      for(char c: p)
        {
            cout<<mp[c];
        }
        cout << nl;
    }

    return 0;
}

