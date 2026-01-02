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

    int t;cin>> t;
    while(t--){

    int n,an;cin >> n;
    vector<int>v(n);
    int z = 0;
    int b = 0;
     an = 0;
    for(int i = 0 ; i< n; i++)
    {
        cin >> v[i];
        if(v[i]== 0)z++;
        else if(v[i]== -1) b++;
    }
    if(b%2 != 0) an = 2;
     cout << z+an << nl;
    }

    return 0;
}


