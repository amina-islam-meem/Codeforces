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
        set<int>s;
        for(int i = 0; i < 4 ; i++)
        {
            int x,y;
            cin >> x >> y;
            s.insert(x);

        }

        int x1 = *s.begin();
        int x2 = *s.rbegin();


        int m = x2 - x1;
        cout << m*m << nl;





    }
    return 0;
}
