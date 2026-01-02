/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            {
            cin >> a[i];
            }

        vector<int> fre;
        int count = 1;
        for (int i = 1; i < n; i++)
            {
            if (a[i] == a[i - 1])
            {
                count++;
            }
        else {
                fre.push_back(count);
                count = 1;
            }
        }
        fre.push_back(count);


    sort(fre.begin(), fre.end());
    int maxFre = fre.back();

    int ans = 0;
        for (int k = 1; k <= maxFre; k++)
            {
            int count1 = 0;
            for (int f : fre)
            {
                if (f >= k)
                 count1++;
            }
            ans = max(ans, count1 * k);
          }
     cout << ans << endl;

    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >>  T;
    while(T--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            {
            cin >> a[i];
            }

        vector<int> fre(n + 1, 0);
        for (int val : a)
            {
            fre[val]++;
            }


        vector<int> fre2;
        for (int f : fre) {
            if (f > 0) {
                fre2.push_back(f);
            }
        }
        sort(fre2.begin(), fre2.end());


        int ans = 0;
        for (int k = 1; k <= n; k++)
            {
            int count = 0;
            for (int f : fre2)
             {
                if (f >= k)
                 {
                    count++;
                }
            }
            ans = max(ans, count * k);
        }

        cout << ans << endl;
    }
    return 0;
}
