
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
        int n,m,h; cin >> n >> m >> h;
        vector<ll>v(n),v1(n);


        for(int i = 0 ; i < n ; i++) cin >> v[i];

        v1 = v;

        int p = 1;
        vector<ll>q(n,0);
        while(m--)
        {
            int b,c;
            cin >> b >> c;
            b--;


            if(q[b]<p)
            {
                v1[b] = v[b];
                q[b] = p;
            }
            v1[b] += c;

            if (v1[b] > h)
            {
                p++;
            }
        }

        for(int i = 0 ; i < n ; i++)
        {
            if(q[i] < p)
                cout << v[i] << " ";
            else
            cout << v1[i] << " ";
        }
        cout << nl;


    }
    return 0;
}
