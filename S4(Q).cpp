#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool first = true;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());

        if (!first) cout << " ";
        cout << word;

        first = false;
    }

    cout << endl;
    return 0;
}

