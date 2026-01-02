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
        string s; cin >> s;

        sort(s.begin(),s.end());

        int value = s[N-1] - 'a' + 1;

        cout << value << endl;

    }
    return 0;
}
