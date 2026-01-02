#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while (T--)
        {
        int n; cin >> n;
        int arr[100];
        for (int i = 0; i < n; i++)
            {
            cin >> arr[i];
           }

        int c;

        if (arr[0] == arr[1] || arr[0] == arr[2])
            c = arr[0];
        else
            c = arr[1];

        for (int i = 0; i < n; i++)
            {
            if (arr[i] != c)
               {
                cout << i + 1 << endl;
                break;
              }
           }
       }

    return 0;
}
