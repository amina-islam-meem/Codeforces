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
        vector<int>a(n);
        vector<int>b(n);
        for(int i = 0; i < n ; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n ; i++)
        {
            cin >> b[i];
        }

        int count = 0;
        while (true)
            {
            bool check = false;
            for (int i = 0; i < n; i++)
                {
                if (a[i] > b[i])
                    {
                         a[i]--;
                         check = true;
                         break;
                    }
            }

            for (int i = 0; i < n; i++)
                {
                if (a[i] < b[i])
                {
                    a[i]++;
                    break;
                }
                }

              count++;
              if(check == false)
                break;
        }

        cout << count << endl;
    }
    return 0;
}


