#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int sum(vector<int> &a,int x)
{
    int sum = 0;
    for(int i = 0 ; i < x ; i++)
    {
        sum = sum + a[i];
    }
    return sum;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int m ,n; cin >> n >> m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++)
    {
        cin >> b[i];
    }
    if(sum(a,n) != sum(b,m))
        cout << "No" <<nl;
    else
       cout<<"Yes" << nl;
    return 0;
}
