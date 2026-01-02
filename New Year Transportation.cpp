#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'


vector<int>v[40005];
bool vis[40005];

void dfs(int src)
{
    vis[src] = true;

    for(int child : v[src])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n,e; cin >> n >> e;

    for(int i = 1; i < n ; i++)
    {
        int x;cin >> x;
        v[i].push_back(i + x);
    }
    dfs(1);

    if(vis[e])
       yes
    else
     no

    return 0;
}
