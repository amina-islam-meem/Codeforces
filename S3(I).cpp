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
        int arr[N + 1];
        int A[N + 1];

        for (int i = 1; i <= N; i++)
        {
            cin >> arr[i];
            A[i] = INT_MAX;
        }

        for (int i = 1; i <= N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                int m = arr[i] + arr[j] + (j - i);
                A[i] = min(A[i], m);
            }
        }

        int mini = INT_MAX;
        for (int i = 1; i <= N; i++)
        {
            mini = min(mini, A[i]);
        }

        cout << mini << endl;
    }
    return 0;
}
