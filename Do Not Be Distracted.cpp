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
        int n; cin >> n;
        string s; cin >> s;
        string s1;
        s1 = s[0];

        for(int i = 1; i < n; i++)
            {
            if(s[i] != s[i-1])
               {
                s1 += s[i];
               }
           }
        int fre[26] = {0};
        for (char c : s1)
            {
            fre[c - 'A']++;
            }

        bool check = false;
        for (int i = 0; i < 26; i++)
            {
            if (fre[i] > 1)
                {
                check = true;
                break;
               }
            }

       if(check == true)
        cout << "No" << endl;
       else
        cout << "YES" << endl;
    }
    return 0;
}
