#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0 ;  i < T; i++)
    {
        string s;
        cin.ignore();
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            bool check = true;
            for (int j = 0; j < tmp.size(); j++)
            {
                if (!(tmp[j] >= 65 && tmp[j] <= 90)) check = false;
            }
            if (check) cout << tmp << " ";
        }
        cout << endl;
    }
}