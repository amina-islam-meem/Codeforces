#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

        int N; cin >> N;
        int arr[N];
        int count = 0;
        for(int i=0; i<N ; i++)
        {
            cin>>arr[i];
        }
        int B = arr[0];
        int W = arr[0];
        for(int i=1; i<N ; i++)
        {
            if(B < arr[i])
            {
                B = arr[i];
                count++;
            }
            else if(W>arr[i])
            {
                W = arr[i];
                count++;
            }
        }
        cout << count << endl;
    return 0;
}
