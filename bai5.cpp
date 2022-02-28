#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] == s[j] && s[i] != '1')
            {
                count++;
                s[j] = '1';
            }
        }
        if (s[i] != '1')cout << s[i] << " "<< count << endl;
    }
}