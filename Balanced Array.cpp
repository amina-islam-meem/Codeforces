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
        if(n % 4 == 0)
        {
            yes
            vector<int>v;
            int sum = 0, sum1 = 0;
            for(int i = 1; i <= n ; i++)
            {
                if(i%2 == 0)
                {
                    v.push_back(i);
                    sum+= i;
                }
            }

            for(int i = 1 ; i <= n ; i++)
            {
                if(i%2 != 0)
                {
                    v.push_back(i);
                    sum1 += i;
                }
            }
            for(int i = 0 ;i < n-1 ; i++)
                cout << v[i] << " ";

            cout<< v.back()+(sum-sum1) << nl;

        }
        else
            no


    }
    return 0;
}
