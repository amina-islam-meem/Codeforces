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
        int n,s; cin >> n >> s;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin>> arr[i];
        }

        int leftDist = abs(s - arr[0]);
        int rightDist = abs(arr[n-1] - s);

        int steps = (arr[n-1]-arr[0]) + min(leftDist, rightDist);


        cout << steps << endl;


    }
    return 0;
}
