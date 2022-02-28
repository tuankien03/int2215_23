 vector <int> v;
    vector <char> c;
    int max = -1000;
    for (int i = 0; i < s.size(); i++)
    {
        int x = 1;
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)){
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] == s[j]) x++;
                v.push_back(x);
                c.push_back(s[i]);
            }
            if (x >= max) max = x;
        }
    }
    for (int i = v.size() - 1; i >= 0; i++)
    {
        if (max == v[i])
        {
            cout << c[i];
            break;
        }
    }