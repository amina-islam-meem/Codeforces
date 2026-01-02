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
    string s; cin >> s;
    int n = s.size();
    if (s[1] == 'b')
      cout << s[0] << ' ' << s.substr(1, n - 2) << ' ' << s[n - 1] <<endl;

    else
      cout << s[0] << ' ' << s[1] << ' ' << s.substr(2) <<endl;

    }
    return 0;
}
