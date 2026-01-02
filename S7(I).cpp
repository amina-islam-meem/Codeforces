#include<bits/stdc++.h>
using namespace std;

int countVowels(string s, int i = 0)
{
    if (i == s.size())
        return 0;
    char ch = tolower(s[i]);
    int result = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') + countVowels(s, i + 1);
    return result;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin,s);
    int r = countVowels(s);
    cout << r << endl;
    return 0;
}
