#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000;

void swapRows(int arr[][MAX], int n, int x, int y)
{
    for (int j = 0; j < n; j++)
        {
        swap(arr[x][j], arr[y][j]);
        }
}

void swapColumns(int arr[][MAX], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
        {
        swap(arr[i][x], arr[i][y]);
       }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;

    int arr[MAX][MAX];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    x--;
    y--;


    swapRows(arr, n, x, y);
    swapColumns(arr, n, x, y);

    for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < n; j++)
             {
            cout << arr[i][j] << ' ';
             }
        cout << endl;
       }

    return 0;
}
