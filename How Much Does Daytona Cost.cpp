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
        int N,k; cin >> N >> k;
        int arr[N];
        int flag = 0;
        for(int i = 0 ; i < N ; i++)
        {
            cin >> arr[i];

        }
        for(int i = 0 ; i < N ; i++)
        {
            if(arr[i]==k){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;


    }
    return 0;
}
