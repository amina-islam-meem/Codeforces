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
        vector<int>v(n);
        vector<int>v1;
        for(int i = 0 ; i < n ; i++)cin >> v[i];

        map<int,int>mp;
        for(int i = 0 ; i < n ; i++)
            mp[v[i]]=i+1;

            for(auto val : mp) v1.push_back(val.first);

        int m = -1;
        int p = v1.size();

        for(int i = 0; i < p ;i++)
        {
            for(int j = i ; j < p;j++)
            {
                if(__gcd(v1[i],v1[j]) == 1)
                    m =max(m ,(mp[v1[i]] + mp[v1[j]]));
            }
        }

        cout << m << nl;




    }
    return 0;
}
