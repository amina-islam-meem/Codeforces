#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;cin >> s;

    string s1 = "hello";
    int j = 0;

    for (int i = 0; i < s.size() && j < s1.size(); i++)
    {
        if (s[i] == s1[j])
            j++;
    }

    if (j == s1.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
