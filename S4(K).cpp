/*#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        int p = s.length();
        int q = t.length();
        int max_len=max(p,q);
            for(int i=0;i<=max_len;i++)
            {
                if(i<p)
                    cout<<s[i];
                if(i<q)
                 cout<<t[i];
            }
                cout<<endl;


        }

    return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        int p = s.length();
        int q = t.length();
        if(p>q){
            for(int i=0;i<p;i++)
            {
                if(i<p)
                    cout<<s[i];
                if(i<q)
                 cout<<t[i];
            }
                cout<<endl;
        }
        else
            {
            for(int i=0;i<q;i++)
            {
                if(i<p)
                    cout<<s[i];
                if(i<q)
                 cout<<t[i];
            }
                cout<<endl;
        }

        }

    return 0;
}

