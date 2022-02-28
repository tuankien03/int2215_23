#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    // for (int i = 0 ; i < s.size(); i++)
    // {
    //     if (s[i] >= 65 && s[i] <= 90)
    //     {
    //         s[i] += 32;
    //     }
    // }
    strlwr(s);
    cout << s;
}