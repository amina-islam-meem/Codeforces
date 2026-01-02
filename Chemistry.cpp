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
        int n,k; cin >> n >> k;
        string s; cin >> s;
        vector<int> fre(26, 0);
        for(char c : s )
        {
            fre[c-'a']++;
        }
        int odd = 0;
        for (int x : fre)
        {
            if (x % 2 == 1)
                odd++;
        }

        int rem = n-k;
        if (odd <= k+(rem % 2))
            {
            cout << "YES" << endl;
           }
        else
            {
            cout << "NO" << endl;
           }

    }
    return 0;
}
