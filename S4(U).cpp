#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    sort(s.begin(),s.end());
   int  countE = 0;
   int  countG = 0;
   int  countP = 0;
   int  countY = 0;
   int  countT = 0;
    for (char &c : s)
        {
        c = tolower(c);
       }

    for(int i = 0 ; i < s.size(); i++)
    {
        if(s[i]=='e')
            countE++;
        else if(s[i]=='g')
            countG++;
        else if(s[i]=='p')
            countP++;
        else if ( s[i]=='y')
            countY++;
        else if (s[i]=='t')
            countT++;
    }
    int r =  min({countE,countG,countP,countY,countT});
    cout << r << endl;
    return 0;
}
