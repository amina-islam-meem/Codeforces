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
        int N; cin >> N;
        bool check = false;

        if (N % 2020 == 0 || N % 2021 == 0)
            {
            check = true;
            }
        else {
            while(N % 2020 != 0)
            {
                N -= 2021;
                if(N < 2020)
                {
                    check = false;
                    break;
                }
            }
           if (N % 2020 == 0 && N >= 0)
                check = true;
        }

        if(check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T; cin >> T;
    while (T--)
        {
        int N; cin >> N;
        if (N % 2020 <= N / 2020)
            cout << "YES"  << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}*/
