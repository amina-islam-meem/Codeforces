/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n - 1; i++)
        {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
                {
                long long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
              }
        }
    }
      long long sum = 0;
    for(int i=0; i<k; i++)
    {
        sum += arr[i];
    }
    cout<<sum<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n && count < k; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
            count++;
        }
    }

    cout << sum << endl;
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
      long long sum = 0;
    for(int i=n-1, j = 0; j<k && i >= 0; i--, j++)
    {
        sum += arr[i];
    }
    cout<<sum<<endl;
    return 0;
}

