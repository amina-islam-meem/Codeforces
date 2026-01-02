#include<iostream>
using namespace std;
int main()
{
    int N;cin>>N;
    int Arr[N];
    int str=0;
    int end=N-1;
    for(int i=0 ;i<N;i++)
    {
        cin>>Arr[i];
    }
    while(str<end)
    {
        swap(Arr[str],Arr[end]);
        str ++;
        end --;
    }
    for(int i=0;i<N;i++)
    {
        cout<<Arr[i]<<" ";
    }
    return 0;
}
