#include<iostream>
using namespace std;
int main()
{
    int N;cin>>N;
    char M;
    int sum=0;
    for(int i =0;i<N;i++)
    {
        cin>>M;
        sum= sum + (M-'0');
    }
    cout<<sum<<endl;
    return 0;
}
