#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size() - 1; i++)
    {
        for (int j = i + 1; j < s.size(); j++)
        {
            if (s[i] > s[j])
            {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    int count = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else {
        cout << s[i] << " " << count << endl;
        count = 1;
        }
    }
}