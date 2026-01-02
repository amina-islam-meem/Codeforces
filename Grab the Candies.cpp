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
        int arr[N];

        for (int i = 1 ; i <= N ; i++)
        {
            cin >> arr[i];
        }
        int sum = 0, sum1 = 0;
        for (int i = 1 ; i <= N ; i++)
        {
            if(arr[i]%2==0)
            {
                sum+= arr[i];
            }
            else
            {
                sum1+= arr[i];
            }
        }
        if(sum > sum1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
