#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int count = 0;
    int dollar[] = {100, 20, 10, 5, 1};

    for (int i=0;i<5;i++)
        {
        count = count + n / dollar[i];
        n %= dollar[i];
       }
    cout<<count<<endl;
    return 0;
}
