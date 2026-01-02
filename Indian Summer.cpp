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

    int n; cin >> n;
    map<pair<string,string>,bool>mp;

    for(int i = 0 ; i < n ; i++)
    {
        string s;
        string s2;
        cin >> s >> s2;
        mp[{s,s2}] = true;

    }

    for (auto val : mp)
    {
        pair<string,string>p = val.first;
        bool check = val.second;
    }

    cout << mp.size() << nl;
    return 0;
}
