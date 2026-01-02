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

    int n,m;
    cin >> n >> m;
    vector<int>a(n),b(m),c;
    for(int i = 0 ; i < n ;i++)cin >> a[i];
    for(int i = 0 ; i < m ; i++)cin >> b[i];

    int l = 0 , r = 0;


    while(l < n || r < m)
    {
        if(l == n)
            {
            c.push_back(b[r]);
            r++;
             }
        else if(r == m)
        {
            c.push_back(a[l]);
            l++;
        }

        else if(a[l]<b[r])
        {
            c.push_back(a[l]);
            l++;
        }
        else
        {
            c.push_back(b[r]);
            r++;
        }

    }
    for(int val : c)
        cout << val << " ";
    return 0;
}
