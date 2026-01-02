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
        int a,b; cin >> a>>b;
        int c = min(a,b);
        cout<<(c-a)+(b-c)<<endl;

    }
    return 0;
}
