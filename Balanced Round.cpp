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
        int n ,k; cin >> n >>k;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int count = 1;
        int mx = 1;
        for(int i = 0 ; i < n-1 ; i++)
        {
            int dif = a[i+1]-a[i];
            if(dif <= k)
                count++;
            else
            {
                mx = max(mx,count);
                count = 1;
            }


        }
        mx = max(mx,count);
        cout << n-mx << nl;
    }
    return 0;
}
