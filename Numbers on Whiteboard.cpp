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
        priority_queue<int>pq;
        for(int i =  1 ; i <= n;i++)
        {
            pq.push(i);
        }

        vector<pair<int,int>> m;

        while(pq.size()>1)
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            m.push_back({a,b});
            pq.push((a+b+1)/2);

        }
        cout << pq.top()<<nl;
        for(auto val : m)
            cout << val.first << " " << val.second << nl;

    }
    return 0;
}

