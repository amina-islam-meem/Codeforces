#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    vi v(n);

    for(int i = 0 ;i < n ; i++)cin >> v[i];
    int flag = 0;

    for(int mask = 0; mask <(1<<n);mask++)
    {
        int sum = 0;
        for(int k = 0; k < n; k++)
        {
            if((mask >> k) & 1)
                sum+=v[k];
            else
                sum -= v[k];
        }

        if(sum %360 == 0)
        {
            flag = 1;
            break;
        }
    }

    if( flag == 1)
        yes
    else
       no



    return 0;
}
