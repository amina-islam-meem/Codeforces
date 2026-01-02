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
        int N; cin >> N;
        string s = to_string(N);
        int digit = s[0] - '0';
        int len = s.size();

        int result = (digit - 1) * 10 + (len * (len + 1)) / 2;

        cout << result << endl;
    }

    return 0;
}


