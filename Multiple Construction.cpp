#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> res(2 * n + 1, 0);

        for (int x = 1; x <= n; x++)
        {
            for (int i = 1; i <= 2 * n; i++)
            {
                if (res[i] == 0 && i + x <= 2 * n && res[i + x] == 0)
                {
                    res[i] = x;
                    res[i + x] = x;
                    break;
                }
            }
        }

        for (int i = 1; i <= 2 * n; i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
