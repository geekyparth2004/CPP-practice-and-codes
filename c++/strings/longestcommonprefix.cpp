#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Khushboo";
    string t = "Khushi";

    int mini = min(s.length(), t.length());
    string m = "";

    for (int i = 0; i < mini; i++) {
        if (s[i] == t[i]) {
            m += s[i];
        } else {
            break;
        }
    }

    cout << m << endl;

    return 0;
}