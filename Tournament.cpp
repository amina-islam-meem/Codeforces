#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int maxV = *max_element(a.begin(), a.end());


        if (k > 1)
            cout << "YES" << endl;
         else if(k == 1 && a[j]== maxV)
            cout << "YES"<< endl;
         else
            cout << "NO" << endl;
        }


    return 0;
}
