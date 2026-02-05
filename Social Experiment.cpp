/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        if(n <4)
            cout << n << nl;
        else
        {
            if(n%2 == 0)
                cout << 0 << nl;
            else
                cout << 1 << nl;
        }


    }
    return 0;
}
*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        int time = 0;
        long long cur = n;
        bool ok = false;

        while(cur >= k) {
            if(cur == k) {
                ok = true;
                break;
            }
            cur = (cur + 1) / 2; // take ceil branch
            time++;
        }

        if(ok) cout << time << '\n';
        else cout << -1 << '\n';
    }

    return 0;
}
