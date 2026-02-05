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

        vector<int>v(k);
        for(int i = 0 ; i < k ; i++)cin >> v[i];

        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        int count = 0;
        int an = 0;

        for(int i= 0; i < k ; i++)
        {
            int m = n-v[i];
            int p = count + m;
            if(p < n)
            {
                count += m;
                an++;
            }
        }
        cout << an << nl;


    }
    return 0;
}


