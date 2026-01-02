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

        for(int i = 0 ; i < n ; i++) cin >> v[i];

        int count = 1;
        for(int i = 0 ; i < n-1 ; i++)
        {
            int m = abs(v[i]- v[i+1]);

            if(m== 5 || m == 7) count++;
        }
        if(count == n)
            yes
        else
         no


    }
    return 0;
}
