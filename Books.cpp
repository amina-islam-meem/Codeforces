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

    int n,t; cin >> n >> t;
    vector<int>v(n);
    //vector<ll>pre(n);


    for(int i = 0 ; i < n ; i++)cin >> v[i];

    ll sum = 0;
    int l = 0;
    int an = 0;

    for(int i = 0; i< n; i++)
        {
        sum += v[i];

        while(sum >t)
            {
              sum -= v[l];
               l++;
            }

        an= max(an, i-l+1);
       }


    cout << an << nl;
    return 0;
}
