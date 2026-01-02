#include<bits/stdc++.h>
using namespace std;

int a[101][101],b[101][101];

void sumRecursive(int r, int c, int i = 0, int j = 0)
{
    if (i == r) return;

    cout << a[i][j] + b[i][j] << " ";

    if (j == c - 1)
        {
        cout << endl;
        sumRecursive(r, c, i + 1, 0);
         }
    else {
        sumRecursive(r, c, i, j + 1);
         }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int r ,c ; cin >> r >> c;
    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0 ; i < r ; i++)
    {
        for(int j = 0 ; j < c ; j++)
        {
            cin >> b[i][j];
        }
    }

    sumRecursive(r, c);


    return 0;
}
