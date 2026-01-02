#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'
const int B = 30;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;cin >> t;
    while(t--)
    {
    int n,kn; cin >> n >> kn;
    vector<int>v(n);

    for(int i = 0 ; i < n ; i++)cin >> v[i];

    vector<int>bits(B+1);

    for(int i = 0 ; i < n ; i++)
    {
        for(int k = B; k >=0; k--)
        {
            if((v[i]>>k)& 1)
                bits[k]++;
        }
    }

    int an = 0;
    for(int k = B; k >=0; k--)
        {
            if(bits[k]== n)
                an+= (1LL << k);
            else
            {
                if(kn >= (n-bits[k]))
                {
                    an+= (1LL << k);
                    kn-= (n-bits[k]);
                }
            }
        }

        cout << an << nl;
    }

    return 0;
}
