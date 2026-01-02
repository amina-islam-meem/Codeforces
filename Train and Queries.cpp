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
        int n,k; cin >> n >> k;
        map<int,set<int>>mp;

        for(int i= 0 ;i < n; i++)
        {
            int x; cin >> x;
            mp[x].insert(i);
        }

        while(k--)
        {
            int a ,b;
            cin >> a >> b;

            if(mp.find(a)== mp.end() || mp.find(b)== mp.end())
                no
            else
            {
                int p,q;
                p = *mp[a].begin();
                q = *mp[b].rbegin();
                if(p < q)
                    yes
                else
                  no
            }
        }


    }
    return 0;
}
