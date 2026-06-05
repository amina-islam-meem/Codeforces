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

    int T; cin >>  T;
    while(T--)
    {
        int n,k; cin >> n>> k;
        vi v(n),v1(n);



        for(int i = 0 ; i < n ; i++) cin >> v[i];

        v1 = v;

         if(k ==1)
         {
             sort(v1.begin(),v1.end());

             if(v == v1)
                yes
             else
                no
         }
         else
            yes

    }
    return 0;
}
