/*#include <bits/stdc++.h>
using namespace std;

bool isSorted(const string &s) {
    for (int i = 1; i < s.size(); i++) {
        if (s[i-1] > s[i]) return false; // found "10"
    }
    return true;
}

int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
        {
        int n;
        string s;
        cin >> n >> s;

        if (isSorted(s)) {
            cout << 0 << "\n";
            continue;
        }

        bool oneMove = false;
        for (int i = 0; i < n && !oneMove; i++) {
            for (int j = i+1; j < n && !oneMove; j++) {
                for (int k = j+1; k < n && !oneMove; k++) {
                    string t1 = s, t2 = s;
                    // right shift
                    t1[i] = s[k];
                    t1[j] = s[i];
                    t1[k] = s[j];
                    if (isSorted(t1)) { oneMove = true; break; }

                    // left shift
                    t2[i] = s[j];
                    t2[j] = s[k];
                    t2[k] = s[i];
                    if (isSorted(t2)) { oneMove = true; break; }
                }
            }
        }

        if (oneMove) cout << 1 << "\n";
        else cout << 2 << "\n";
    }

    return 0;
}*/


#include <bits/stdc++.h>
using namespace std;

int main()
 {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
        {
        int n;
        string s;
        cin >> n >> s;
        int count = 0;
        for (char c : s)
         {
            if (c == '0')
             {
                count++;
            }
        }
        int ans = 0;
        for (int i = 0; i < count; i++)
         {
            if (s[i] == '1')
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
