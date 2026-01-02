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
    int t;cin >> t;
    while(t--)
        {
    int n,k;
    cin >> n >> k;
    string s;cin >> s;

    int w= 0, count = n;

    for(int i = 0;i < k ; i++)
    {
        if(s[i]=='W')w++;

    }
    count = w;
    for (int i = k; i < n; i++)
        {
            if (s[i-k] == 'W') w--;
            if (s[i] == 'W') w++;
            count = min(count, w);
        }
    cout << count << nl;
        }
    return 0;
}



