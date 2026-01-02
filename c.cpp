#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x;
    cin >> x;

    string s = to_string(x);
    int m;
    for(int i = 0 ; i < s.size(); i++)
    {
         int m = s[i]-'0';
         int n = 9 - m;
        if (i == 0 && n == 0)
            cout << m;
        else
            cout << min(m, n);
    }
    return 0;
}
