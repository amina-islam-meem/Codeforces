#include<iostream>
using namespace std;
int main()
{
    int N;cin>>N;
    int flag = 1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=3;j++)
        {

         cout<<flag<<" ";
         flag++;
        }

        cout<<"PUM"<<endl;
        flag++;
    }

    return 0;
}
