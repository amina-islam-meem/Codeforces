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
        vector<string>a(n);
        vector<string>b(n);
        vector<string>c(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        map <string, vector <int> > mp;

        for(int i = 0; i < n; i++)
            {
            mp[a[i]].push_back(0);
            mp[b[i]].push_back(1);
            mp[c[i]].push_back(2);
           }

        vector <int> ans(3);

        for(auto [x,y] : mp)
            {
            if(y.size() == 1)
                ans[y[0]] += 3;
            if(y.size() == 2) {
                ans[y[0]]++;
                ans[y[1]]++;
            }
        }
        cout << ans[0] << " " << ans[1] << " " << ans[2] << nl;
    }
    return 0;
}
