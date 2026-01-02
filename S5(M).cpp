#include<bits/stdc++.h>
using namespace std;
void distinct(vector<int>a,int n)
{
    sort(a.begin(),a.end());
    int count = 0;
    for(int i = 0 ; i <n ; i++)
    {
      if(a[i]== a[i+1])
        continue;
      else
        count++;
    }
    cout << count << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n ; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    distinct(a,n);
    return 0;
}
