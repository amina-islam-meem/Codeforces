/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;

        if(s[0] != '1' || s[1] != '0' || s[2] == '0' || (s.size() == 3 && (s[2] == '0' || s[2] == '1')))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}*/
//#include <iostream>
//#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int freq[26] = {0};
    int count = 0;
    for (int i = 0; i < s.length(); i++)
     {
    char ch = s[i];
    if (ch >= 'a' && ch <= 'z')
    {
        freq[ch - 'a']++;
    }
     }

    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > 0)
            count++;
    }
    cout << count << endl;
    return 0;
}

