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

    int k,m ; cin >> k;
    vector<int> a(12);
    int sum =0;
    for(int i = 0 ; i < 12 ; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(),a.rend());

     bool check = false;
     if(k == 0 )
     {
         cout << 0 << nl;
         return 0;
     }
    for(int i = 0 ; i < 12; i++)
    {
        sum += a[i];
        if(sum >= k)
        {
            check = true;
            m = i;
            break;
        }


    }
    if(check == true)
       cout << m+1 << nl;
    else
       cout << -1 << nl;


    return 0;
}
