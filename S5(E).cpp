#include<bits/stdc++.h>
using namespace std;
void swapping(int x,int y)
{
    swap(x,y);
    cout << x << " " << y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int x,y;
    cin >> x >> y;
    swapping(x,y);

    return 0;
}
