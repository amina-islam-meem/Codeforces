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
        int flag = 0;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i]=='i' && s[i+1] == 't')
            {
                flag = 1;
                break;
            }

        }
        if(flag == 1)
        cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }
    return 0;
}
