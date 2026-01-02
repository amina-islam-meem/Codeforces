/*#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int count=0;
        int c1=0;
        for(char c:s)
        {
            if(c=='1')
                c1++;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                count=c1-1;
                else
                    count = c1+1;

        }
        cout<<count<<endl;
    }
    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int count1 = 0;
        for (char c : s)
         {
            if (c == '1')
                count1++;
        }
        int count = 0;
        for (int i = 0; i < n; ++i)
         {
            if (s[i] == '1')
                count += (count1 - 1);
             else
                count += (count1 + 1);
        }

        cout << count << endl;
    }
    return 0;
}


