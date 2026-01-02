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
        int k,x; cin >> k >>x;
        while(k--)
        {
            x *= 2;
        }
      cout << x << endl;

    }
    return 0;
}
