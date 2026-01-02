#include<bits/stdc++.h>
using namespace std;

void average(double arr[],int n)
  {
      double sum = 0.0;
      for ( int i = 0 ; i < n; i++)
      {
          sum+=arr[i];
      }
      double aver = (sum/n);
      cout << fixed << setprecision(7) << aver << endl;
  }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n; cin >> n;
    double arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    average(arr,n);
    return 0;
}
