#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <typename T>
 using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
//p.order_of_key(x);


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
    int n;cin >> n;
    vector<int>v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];
    pbds<int>p;
    
    ll count = 0;
    for(int i= n-1 ; i >= 0 ; i--)
    {
        p.insert(v[i]);
        count += p.order_of_key(v[i]);
        
    }
    cout <<count << nl;
   }
    return 0;
}
