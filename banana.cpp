#include<iostream>
using namespace std;
int main()
{
    int k,w;
    long long m = 0;
    long long n;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        m = m +(i*k);
    }
    if(m>n)
        cout<<m-n<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
