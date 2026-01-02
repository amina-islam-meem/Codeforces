#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N;cin>>N;
    int X,maximum=0;
    for(int i=1;i<=N;i++)
    {
        cin>>X;
        maximum=max(maximum,X);
    }
    cout<<maximum<<endl;
    return 0;
}
