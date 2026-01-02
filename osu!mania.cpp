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
        vector<int>v;
        while(n--)
        {
            string s; cin >> s;
            for(int i = 0 ; i < 4 ; i++)
            {
                if(s[i] == '#') v.push_back(i+1);
            }
        }

        reverse(v.begin(),v.end());
        for(int val : v)
            cout << val << " ";

        cout << endl;


    }
    return 0;
}
