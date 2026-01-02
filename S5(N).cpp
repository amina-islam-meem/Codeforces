#include <bits/stdc++.h>
using namespace std;

void right_zero(int a[], int n)
 {
    for(int i = 0 ; i < n; i++)
    {
        if(a[i]== 0)
             a[n-1-i] = a[i];
    }
    for(int i = 0 ;i < n ; i++)
    {
        cout << a[i] << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    int arr[N];

    for (int i = 0; i < N; i++)
        {
        cin >> arr[i];
       }

    right_zero(arr, N);

    /*for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    return 0;
}
