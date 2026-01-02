#include<bits/stdc++.h>
using namespace std;

bool isOnlyPunctuation(const string& word)
{
    for (char ch : word)
        {
        if (!ispunct(ch))
         return false;
        }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin,s);

    for (char &c : s)
        {
        if (c == '!' || c == '.' || c == '?' || c == ',')
            c = ' ';
        }

    stringstream ss(s);
    string word;
    int count = 0 ;
    while (ss >> word)
        {

        if (isOnlyPunctuation(word))
            continue;
        count++;
        }
        cout << count << endl;
    return 0;
}
