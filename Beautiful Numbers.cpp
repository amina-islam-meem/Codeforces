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
        ll n; cin >> n;

        vector<int>d;
        int sum = 0;
        while(n)
            {
                int m = n%10;
                if(m!=0)
                {
                d.push_back(m);
                 sum += m;
                }
               n /= 10;
            }

            reverse(d.begin(), d.end());

        if(sum <= 9)
        {
            cout << 0 << nl;
            continue;
        }

            int count = 0;
            bool check = false;
            int p = d.size();
            sort(d.begin(), d.end(), greater<int>());

            for(int i = 0; i < d.size() && sum > 9; i++)
                {
                    if(d[i] > 1)
                       {
                            sum -= (d[i] - 1);
                            count++;
                      }
            }
            cout <<count << nl;
        }

    return 0;
}
