#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >> T;
    while (T--)
    {
        ll x, y;
        cin >> x >> y;

        if (x == y)
         {
            cout << -1 << endl;
            continue;
        }
        if (x < y)
        {
            cout << 2 << endl;
            continue;
        }
        if (y >= 2 && x >= y + 2)
        {
            cout << 3 << endl;
            continue;
        }
        cout << -1 << endl;
    }
    return 0;
}
