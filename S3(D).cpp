#include<iostream>
using namespace std;
int main()
{
  int N;cin>>N;
  int Arr[N];
  for(int i=0;i<N;i++)
  {
     cin>>Arr[i];
     if(Arr[i]<=10)
     {
         cout<<"A"<<"["<<i<<"] = "<<Arr[i]<<endl;
     }
  }
  return 0;
}
