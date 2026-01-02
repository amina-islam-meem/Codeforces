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
        int x,y,r,m; cin >> x >> y;
        if(y % 2 == 0)
            {
                r = y /2;
                m = (y *4 + x)/15;
                if (m == 0)
                    m = 1;
                cout << max(r,m)<<endl;


            }
        else
        {
            r = y/2 + 1;
            m = (y *4 + x)/15;
            if(m== 0)
                m = 1;
            cout << max(r,m)<<endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        int r = (y + 1) / 2;
       int m = (y * 4 + x + 14) / 15;
        cout << max(r, m) << endl;
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
        int x,y ; cin >> x >> y;
        int r = y/2;
        int m = r*7;
        if(y%2 != 0)
        {
            r++;
            m += 11;
        }
        if(x > m)
        {
            x -= m;
            r += x/15;
            if(x%15 != 0)
                r++;
        }
        cout << r << endl;


    }
    return 0;
}

