#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int cc,cs,db;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] <= 90 && s[i] >= 65) || (s[i] >= 97 && s[i] <= 122))
        {
            cc++;
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            cs++;
        }
        else db++;
    }
    cout << cc << " " << cs << " " << db;

}