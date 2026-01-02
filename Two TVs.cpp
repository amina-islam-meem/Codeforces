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

    int n ; cin >> n;
    map<int,int>d;
    bool check = false;
    while(n--)
    {
        int l,r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;

    }
   ll sum = 0;
    for(auto [key,val]:d)
    {
        sum+= val;
        if(sum>2)
        {
            check = true;
            break;
        }
    }

    if(check)
        no
    else
        yes


    return 0;
}
