#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char>v = {'a','e','i','o','u'};
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            ans += v[i % 5];
        }
        sort(ans.begin(),ans.end());
        cout << ans << "\n";
    }
    return 0;
}

