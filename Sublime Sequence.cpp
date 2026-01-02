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
        int x,n;
        cin >> x >> n;
        if(n%2 == 0)
            cout << 0 << endl;
        else
            cout << x << endl;
    }
    return 0;
}
