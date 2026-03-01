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



    vector<vector<int>> prime(100005);
    for(int i = 2; i < 100005; i++)
           {
             if(prime[i].empty())
                {
                    for(int j = i; j < 100005; j += i)
                        prime[j].push_back(i);

                }
           }


        int n; cin >> n;
        vi v(n);



        map<int,int>fre;

        for(int i = 0 ; i < n ; i++)
        {
            int x;cin >> x;
            for(auto val : prime[x])
                fre[val]++;
        }



        int mx = 1;
        for(auto val : fre)
        {
            mx = max(mx,val.second);
        }

        cout << mx << nl;

    return 0;
}
