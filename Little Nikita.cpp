#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n,m ;cin >> n>> m;
        if(((n-m)%2==0)&& (n>=m))
            cout<<"YES"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
