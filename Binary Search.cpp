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

        int n,k; cin >> n >> k;
        vector<ll>v(n);
        for(int i = 0 ; i < n ; i++) cin >> v[i];

        sort(v.begin(),v.end());

        vector<ll>v1(k);
        for(int i = 0 ; i < k ; i++) cin >> v1[i];

        for(int i = 0 ; i < k ; i++)
        {
            bool check = binary_search(v.begin(),v.end(),v1[i]);
            if(check)
                yes
            else
            no
        }
    return 0;
}
