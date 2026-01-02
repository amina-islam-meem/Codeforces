#include<iostream>
using namespace std;
int main()
{
    int n,h;cin>>n>>h;
    int arr[n];
    int m,p,b;
    m = 0;
    b = 0;
    for(int i = 0; i<n;i++)
    {
       cin>> arr[i];
    }
    for(int i = 0; i<n;i++)
    {
      if(arr[i] <= h)
      {
         m++;
      }
      else
      {
          b =b + 2;
      }
      p = m+b;
    }
    cout<<p<<endl;
    return 0;
}
