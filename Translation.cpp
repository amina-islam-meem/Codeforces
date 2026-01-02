/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    reverse(a.begin(),a.end());
    if(a == b)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n;
        int arr[20]; // Since 1 ≤ n ≤ 20

        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Read input digits
        }

        // Required date sequence: "01.03.2025" → {0, 1, 0, 3, 2, 0, 2, 5}
        int target[8] = {0, 1, 0, 3, 2, 0, 2, 5};
        int index = 0; // Tracks the progress in the target sequence
        int position = 0; // Stores the position where the sequence is completed

        // Scan the array to match the target sequence
        for (int i = 0; i < n; i++) {
            if (arr[i] == target[index]) { // Match current digit
                index++;
                if (index == 8) { // If full sequence is matched
                    position = i + 1; // Store 1-based position
                    break;
                }
            }
        }

        // Output result: first matched position or 0 if not possible
        cout << (index == 8 ? position : 0) << endl;
    }

    return 0;
}

