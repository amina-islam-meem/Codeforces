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
        int n,k; cin >> n >> k;
        string s; cin >> s;


        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i]=='W')
            {
                count++;
                i+=(k-1);
            }

        }

        cout << count << nl;


    }
    return 0;
}


