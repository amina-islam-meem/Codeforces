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
        int m = s.size()/2;
        bool check = false;
        for(int i = 0 ; i < m-1; i++)
        {
            if(s[i]!= s[i+1])
            {
                check = true;
                break;
            }

        }
        if(check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }
    return 0;
}
