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
        int n,k; cin >> n >>k;
        vector<int>v(k,0);

        for(int i = 0 ; i < k;i++)
        {
            int a,b; cin >> a >> b;
            --a;
            v[a] += b;
        }

        sort(v.rbegin(),v.rend());
        int m = min(n,k);
        int an =0;
        for(int i = 0 ; i < m ; ++i) an += v[i];


        cout <<an << nl;


    }
    return 0;
}
