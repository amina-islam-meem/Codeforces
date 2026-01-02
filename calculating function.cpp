#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    int sum1=0;
    int sum2=0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
      {
      sum1=sum1+i;
      }
    else
    {
    sum2=sum2-i;
    }
    }
   int sum = sum1+sum2;
    cout<<sum<<endl;
    return 0;    
}
