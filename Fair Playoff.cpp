#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
        {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;


        int arr[4] = {s1, s2, s3, s4};
        sort(arr, arr + 4);

        int w1 = max(s1, s2);
        int w2 = max(s3, s4);

        if ((w1 == arr[3] && w2 == arr[2]) || (w1 == arr[2] && w2 == arr[3]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
