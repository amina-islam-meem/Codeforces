#include<iostream>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int A,B;cin>>A>>B;
        int sum = 0;
        if (A > B) {
            swap(A, B);
        }
        for(int i=A+1;i<B;i++)
        {
            if(i%2 != 0){
                sum= sum+i;
                }
        }
        cout<<sum<<endl;
    }
    return 0;
}
