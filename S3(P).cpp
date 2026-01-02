#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(arr[i]%2 !=0)
        {
            cout<< 0 <<endl;
            break;
        }
        else
        {
            count++;
        }
    }
    if(count == n)
    {
        int op = 0;
        while (true)
            {
            int flag = 1;
            for (int i = 0; i < n; i++) {
                if (arr[i] % 2 != 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
             break;

            for (int i = 0; i < n; i++)
                {
                arr[i] /= 2;
                }
                op++;
        }
        cout << op<< endl;
    }
    return 0;
}
