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
        int a,b; cin >> a >> b;
        int p = abs(a-b);
        if(a==b)
            cout<<0<<endl;
        else if(p%10==0)
            cout<<p/10<<endl;
        else
            cout<<(p/10)+1<<endl;
    }
    return 0;
}
