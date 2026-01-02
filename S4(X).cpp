#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    if (n == 1)
        {
        cout << s << endl;
        return 0;
      }

    string smallest = string(10000, 'z');

    for (int i = 1; i < n; i++)
        {
        string x = s.substr(0, i);
        string y = s.substr(i);

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        string c = x + y;
        if (c < smallest)
            smallest = c;
    }

    cout << smallest << endl;
    return 0;
}

