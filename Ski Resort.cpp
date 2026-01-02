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
        ll n,k,q; cin >> n >> k >> q;
        ll count = 0;
        ll an =0;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin>> v[i];
            if(v[i]<=q)
                count++;
            else
            {
                if(count >= k)
                    an += (count -k + 1)*(count -k + 2)/2;

                count = 0;
            }
        }
        if(count >= k)
           an += (count - k +1)*(count-k+2)/2;


            cout << an << nl;


    }
    return 0;
}
