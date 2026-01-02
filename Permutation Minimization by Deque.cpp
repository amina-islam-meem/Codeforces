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
        vector<int>v(n);
        deque<int>dq;

        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
        }
        dq.push_back(v[0]);
        for(int i = 1 ; i < n ; i++)
        {
            if(v[i]< dq.front())
                dq.push_front(v[i]);
            else
                dq.push_back(v[i]);
        }

         for(int val : dq)
            cout<<val << " ";
      cout << nl;
    }
    return 0;
}
