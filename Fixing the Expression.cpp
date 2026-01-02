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

     string s;cin >> s;
         if((s[0]> s[2] && s[1] == '>')||(s[0] < s[2] && s[1] == '<')||(s[0] == s[2] && s[1]== '='))
         cout << s << endl;
         else
         {
            if (s[0] < s[2])
                s[1] = '<';
             else if (s[0] == s[2])
                s[1] = '=';
             else
                s[1] = '>';

            cout << s << endl;
         }


    }
    return 0;
}
