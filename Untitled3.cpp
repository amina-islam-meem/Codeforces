#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    ll x;
    cin >> n >> x;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 0;
    int team_size = 0;

    for (int i = n - 1; i >= 0; i--) {
        team_size++;
        if (a[i] * team_size >= x) {
            count++;
            team_size = 0;
        }
    }

    cout << count << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
