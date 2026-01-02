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

    int n ; cin >> n;
    map<string,int>mp;
    vector <string> v(n);

    for(int i = 0; i < n; i++)
        {
        cin >> v[i];
        mp[v[i]] = i;
       }

   vector < pair <int, string> > p;
   for(auto [a,b] : mp)
        {
			p.push_back({b,a});
       }
   sort(p.rbegin(),p.rend());
   for(auto val : p )
    {
        cout << val.second << nl;
    }
    return 0;
}
