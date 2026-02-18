#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

 ll mx = 100002;
 vector<int> primes;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    vector<bool>prime(mx+1,true);

        prime[0] = prime[1] = false;
        for(int i = 2;i*i <= mx; i++)
        {
            if(prime[i])
            {
                for(int j= i*i; j <= mx; j+=i)
                    prime[j]= false;
            }
        }



      for(int i = 2; i <= mx; i++)
        if(prime[i]) primes.push_back(i);

    int t;cin >> t;
    while(t--)
    {

        int n; cin >> n;

        int x = 0;
        int y = 0;

       for(int val : primes)
        {
            if(val >= n + 1)
            {
                x = val;
                break;
            }
        }


    for(int val : primes)
        {
            if(val >= x + n)
            {
                y = val;
                break;
            }
        }

        cout << 1LL * x* y << nl;

    }

    return 0;
}
