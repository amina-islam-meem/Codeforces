#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a,b,m; cin >> a >> b;
    string s; cin >> s;
    for(int i = 0 ; i <= s.size(); i++)
    {
        if(s[i]== '-')
            m = i;
    }

    if (m == a)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
