#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<char>> arr(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y')
                {
                  flag = 1;
                  break;
                }
        }
    }

    if(flag == 1)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;

    return 0;
}

