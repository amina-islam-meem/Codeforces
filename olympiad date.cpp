#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
     int target[8] = {0, 1, 0, 3, 2, 0, 2, 5};
     int index = 0;
     int p = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target[index]) {
            index++;
            if (index == 8)
                {
                cout << i + 1 << endl;
                p = i + 1;
               break;
            }
        }
    }

  if (index<8)
    {
      cout <<"0"<< endl;
    }
}
 return 0;
}
/*
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[20];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int target[8] = {0, 1, 0, 3, 2, 0, 2, 5};
        int index = 0;
        int position = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == target[index]) {
                index++;
                if (index == 8) {
                    position = i + 1;
                    break;
                }
            }
        }


        cout << (index == 8 ? position : 0) << endl;
    }

    return 0;
}*/
