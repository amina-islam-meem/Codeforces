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
        for(int i = 0 ; i < n; i++) cin >> v[i];

        int sum = 0;

        for(int i = 0 ; i < n ; i++)
        {
          for(int j = i; j < n; j++)
            {
                swap(v[i], v[j]);

                vector<int> pre(n);
                pre[0] =v[0];

                for(int k = 1; k < n; k++)
                    pre[k] = max(pre[k-1],v[k]);


                int count = 0;


                for(int l = 0; l < n; l++) count += pre[l];


                sum = max(sum, count);

               swap(v[i], v[j]);
            }
        }

        cout << sum << nl;
    }
    return 0;
}
