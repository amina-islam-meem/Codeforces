#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    char c; cin >> c;
    string s; cin >> s;
    string m = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if(c == 'R')
        {
    for(int i = 0 ; i < s.size() ; i++)
    {
        char p = s[i];
        size_t pos = m.find(p);
        if (pos!= string::npos)
        {
            cout<<m[pos-1];
        }

    }
     }
     else
     {
         for(int i = 0 ; i < s.size() ; i++)
           {
              char p = s[i];
              size_t pos = m.find(p);
              if (pos!= string::npos)
                 {
                    cout<<m[pos+1];
                 }

            }
     }

    return 0;
}
