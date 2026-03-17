/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define nl '\n'

using vi = vector<int>;
using vll = vector<long long>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n,k,p,m; cin >> n >> k >> p >>m;
         vi v(n+1);

         for(int i = 1 ; i <= n ; i++) cin >> v[i];





    }
    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

void solve() {
    int n, k, p, m;
    cin >> n >> k >> p >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    priority_queue<pii, vector<pii>, greater<pii>> min_heap;
    deque<pii> dq;

    p--;

    for (int i = 0; i < n; i++) {
        pii card = {(i == p ? 0 : 1), a[i]};

        if (i < k) {
            min_heap.push(card);
        } else {
            dq.push_back(card);
        }
    }

    int ans = 0;

    while (!min_heap.empty()) {
        pii top = min_heap.top();
        min_heap.pop();

        if (m < top.second) {
            break;
        }

        m -= top.second;

        if (top.first == 0) {
            ans++;
        }

        dq.push_back(top);

        if (!dq.empty()) {
            min_heap.push(dq.front());
            dq.pop_front();
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
