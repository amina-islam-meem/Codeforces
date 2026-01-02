/*#include<iostream>
using namespace std;
int main()
{
    string x,y;
    cin>>x>>y;
    if(x==y)
        cout<<x<<endl;
    else if(x.length()<y.length())
        cout<<x<<endl;
    else if(x.length()>y.length())
        cout<<y<<endl;
        else
        {
            for(int i=0;i<x.length();i++)
            {
                if(x[i]<y[i])
                    cout<<x[i];
                else
                    cout<<y[i];
            }
            cout<<endl;
        }
    return 0;

}*/
#include<iostream>
using namespace std;
int main()
{
    string x,y;
    cin>>x>>y;
    if(x<y)
        cout<<x<<endl;
        else if(x>y)
            cout<<y<<endl;
        else
            cout<<x<<endl;
        return 0;
}
