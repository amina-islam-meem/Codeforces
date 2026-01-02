#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++)
        {
        int x;
        cin >> x;
        x = abs(x);
        mini = min(mini, x);
      }
    cout << mini << endl;

    return 0;
}










#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    // First 30 digits of Pi (after removing the decimal point)
    string pi = "314159265358979323846264338327";

    while (t--) {
        string n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n.size(); ++i) {
            if (n[i] == pi[i])
                ++count;
            else
                break;
        }

        cout << count << '\n';
    }

    return 0;
}
