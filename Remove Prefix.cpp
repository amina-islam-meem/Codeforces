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

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vector <int>a;
        map <int, int> mp;

        for(int i = 0; i < n; i++)
        {
            int x; cin >> x;
            mp[x]++;
            a.push_back(x);
        }
     int idx = 0;
        for(int i = 0; i < n; i++)
        {
            if(mp[a[i]] >= 2)
                {
                idx = i+1;
                mp[a[i]]--;
                 }
        }
        cout << idx << nl;

    }
    return 0;
}


