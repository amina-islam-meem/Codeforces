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

        for(int i = 0 ; i < n; i++)cin >> v[i];


        int idx =0;

         int mx = *max_element(v.begin(), v.end());

        for(int i = 0 ; i < n; i++)
        {
            if(v[i] == mx)
            {

                idx ++;
            }
        }

       cout << idx << nl;
    }
    return 0;
}
