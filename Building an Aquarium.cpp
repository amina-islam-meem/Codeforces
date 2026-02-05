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
        int n,x; cin >> n >> x;
        vector<int>v(n);

        for(int i = 0 ; i < n; i++)cin >> v[i];

        int m = *max_element(v.begin(), v.end());
        int l = 1;
        int r = m + x;
        int an = 1;

        while (l<= r)
            {
            int  mid = l+ (r - l) / 2;
            int count = 0;

            for (int i = 0; i < n; i++)
                {
                if (mid > v[i])
                 {
                    count+= mid - v[i];
                    if(count> x)
                        break;
                }
               }


            if (count<= x)
                {
                an = mid;
                l= mid +1;
                }
             else
                r= mid - 1;



    }

    cout << an << nl;
    }
    return 0;
}
