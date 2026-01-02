#include<iostream>
using namespace std;
int main()
{
    int M;
    cin>>M;
    int S=M/5;
    if(M%5==0)
    {
       cout<<S<<endl;
    }
    else
    {
        cout<<S+1<<endl;
    }
    return 0;
}
