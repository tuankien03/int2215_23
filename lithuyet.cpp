#include <bits/stdc++.h>
using namespace std;
//stoi
//stoll
//substr
//to_string(s)
//stringstream
int main()
{
    string s, s1;
    cin >> s;
    // if (s > s1) cout << "s > s1";
    // else if (s == s1) cout << "s = s1";
    // else cout << "s < s1";
    // string b = s.substr(2,5);
    // cout << b;
    stringstream s2(s);
    while(s2 >> s1)
    {
        cout << s1 << " ";
    }
}