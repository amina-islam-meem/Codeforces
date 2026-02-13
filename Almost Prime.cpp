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


    int n; cin >> n;
    vector<int>prime(n+1,0);

    for(int i = 2; i <= n; i++)
    {
        if(prime[i]== 0)
        {
            for(int j= i; j <= n; j+=i)
            {
                prime[j]++;
            }
        }
    }

    int an= 0;
    for(int i = 2; i <= n; i++)
    {
        if(prime[i] == 2)
            an++;
    }

   cout << an << nl;


    return 0;
}
