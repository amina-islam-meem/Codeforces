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
        ll sum = 0;


        for(int i=0; i < n ; i++)
        {
            int x;cin >> x;
            if(x!=0)
                pq.push(x);
            else
            {
                if(!pq.empty())
                {
                    int it = pq.top();
                    sum+= it;
                    pq.pop();
                }

            }


        }

        cout << sum << nl;


    }
    return 0;
}
