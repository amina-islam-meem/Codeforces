/*#include<iostream>
using namespace std;
int main()
{
    string s;cin>>s;
    int count = 0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]== 'h'&& s[i+1]=='e')
        {
            count++;
        }
        if(s[i]== 'e'&& s[i+1]=='l')
            count++;
        if(s[i]== 'l'&& s[i+1]=='l')
            count++;
        if(s[i]== 'l'&& s[i+1]=='o')
            count++;
    }
    if(count>=5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string target = "hello";
    int j = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == target[j]) {
            j++;
        }
        if (j == target.size()) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    string t = "hello";
   for(int i = 0; i < s.size(); i++)
         {
			int k = i;
			int j = 0;

			while(j < t.size())
			     {
						if(s[k] != t[j])
                        break;
						j++;
						k++;
			     }
			if(j == 5)
                {
                cout << " YES" << endl;
                return 0;
			   }
           }
cout << "NO" << endl;
return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin >> s;
    string t = "hello";
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[j])
            {
            j++;
            }
        if (j == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}


