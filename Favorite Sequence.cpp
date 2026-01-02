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
        vector<int>v(n+1),an;

        for(int i = 1 ; i <= n ; i++)cin >> v[i];

        int l = 1;
        int r = n;
        int i = 1;

        while(l <= r)
        {

            if(i%2 != 0){
            an.push_back(v[l]);
            l++;}
            else
            {
                an.push_back(v[r]);
                r--;
            }

            i++;
        }

        for(int val : an)
            cout << val << " ";

        cout << nl;


    }
    return 0;
}
