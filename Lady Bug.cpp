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
        string a,b;
        cin >> a >> b;
        int odd0 = 0;
        int even0 = 0;
        int odd1 = 0;
        int even1 = 0;

        for(int i = 0 ; i < n ; i++)
        {
            if((i+1) % 2 == 0)
            {
                if(a[i]== '1')
                    even1++;
                if(b[i] == '0')
                    even0++;
            }
            else
            {
                if(a[i]== '1')
                    odd1++;
                if(b[i] == '0')
                    odd0++;
            }
        }
        if(even1 <= odd0 && odd1 <= even0)
            yes
        else
            no

    }
    return 0;
}
