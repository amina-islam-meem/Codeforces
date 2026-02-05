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
        int n,s,x; cin >> n >> s >> x;
        vector<int>v(n);

        int sum = 0;

        for(int i = 0 ; i <n ; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }

        if(sum <= s)
        {
            if((s-sum)% x == 0)
                yes
            else
               no
        }
         else
            no

    }
    return 0;
}
