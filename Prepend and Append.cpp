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
        string s;cin >> s;
        int l = 0,r=n-1;
        int count = n;
        while(l<= r)
        {
            if(s[l]!= s[r])
            {
                count-=2;
                l++;
                r--;

            }
            else
                break;
        }
        cout << count << nl;


    }
    return 0;
}
